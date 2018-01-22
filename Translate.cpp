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
	string num;
	cout << "Write a number's name: ";
	cin >> num;

	if (num == "one")
	{
		cout << "That number is a 1!";
	}
	else if (num == "two")
	{
		cout << "That number is a 2!";
	}
	else if (num == "three")
	{
		cout << "That number is a 3!";
	}
	else if (num == "four")
	{
		cout << "That number is a 4!";
	}
	else if (num == "five")
	{
		cout << "That number is a 5!";
	}
	else if (num == "zero")
	{
		cout << "That number is a 0!";
	}
	else
	{
		cout << "I dunno know that number";
	}


	keep_window_open();
	return 0;
}