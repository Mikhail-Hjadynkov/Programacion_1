#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>
#include <algorithm>

using namespace std;

int main()
{
	int counter = 0, lister = 1;
	string iname, oname, input, main_comparator, comparator;
	vector<string> list, organizer;
	cout << "---ANAGRAM CLASIFICATOR---" << endl;
	cout << "Please write the file name to clasify: ";
	cin >> iname;
	ifstream ist{ iname };
	cout << endl << "<<Received Words:" << endl;
	while (getline(ist, input))
	{
		stringstream words{ input };
		for (string s; words >> s;)
		{
			list.push_back(s);
			cout << list[counter] << endl;
			counter++;
		}
	}
	cout << endl;
	counter = 1;
	while (list.size() > 0)
	{
		cout << "New Anagram found:" << endl;
		organizer.push_back("New Anagram: ");
		organizer.push_back(list[0]);
		cout << list[0] << endl;
		main_comparator = list[0];
		sort(main_comparator.begin(), main_comparator.end());
		while (counter < list.size())
		{
			comparator = list[counter];
			sort(comparator.begin(), comparator.end());
			if (main_comparator == comparator)
			{
				organizer.push_back(list[counter]);
				cout << list[counter] << endl;
				list.erase(list.begin() + counter);
			}
			else
			{
				counter++;
			}
		}
		organizer.push_back(" ");
		list.erase(list.begin());
		counter = 1;
		lister++;
		cout << endl;
	}
	 
	cout << "Please write output file name:";
	cin >> oname;
	cout << endl << ">>File preview" << endl;
	ofstream ost{ oname };

	for (int i = 0; i < organizer.size(); i++)
	{
		ost << organizer[i] << endl;
		cout << organizer[i] << endl;
	}

	system("pause");
	return 0;
}