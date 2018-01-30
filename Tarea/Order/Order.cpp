#include<iostream>
#include<vector>
#include<Windows.h>

using namespace std;

int main()
{
	int size, count=0;
	
	cout << "How many numbers do you wanna sort?: ";
	cin >> size;

	vector <int> array(size);

	for (int i = 0; i < size; i++)
	{
		cout << "Insert number "<< i+1 <<": ";
		cin >> array[i];
	}

	while (count < size)
	{
		for (int i = 1; i < size; i++)
		{
			if (array[i] > array[i - 1])
			{
				int interchange;
				interchange = array[i];
				array[i] = array[i - 1];
				array[i - 1] = interchange;
			}
		}
		count++;
	}

	cout << "Ordered numbers (Descending):";

	for (int i = 0; i < size; i++)
	{
		cout << " " << array[i];
	}

	cout << endl;


	system("pause");
	return 0;
}