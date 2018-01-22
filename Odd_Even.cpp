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
	int num;
	cout << "Write a number: ";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "The number " << num << " is even." << endl;
	}
	else
	{
		cout << "The number " << num << " is odd." << endl;
	}
	keep_window_open();
	return 0;
}