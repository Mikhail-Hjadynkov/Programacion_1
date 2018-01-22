#include <iostream>
#include <string>

using namespace std;

inline void keep_window_open()
{
	char ch;
	cin >> ch;
}

int main()
{
	string previous = "";
	string current;
	while (cin >> current)
	{
		if (previous == current)
		{
			cout << "Repeated word: " << current << '\n';
			//Capital letters are different to lower case.
		}
		previous = current;
	}
	keep_window_open();
	return 0;
}