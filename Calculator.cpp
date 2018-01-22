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
	string operation;
	double num1, num2;
	cout << "Write an operation [operator num1 num2]: ";
	cin >> operation >> num1 >> num2;
	if (operation == "+")
	{
		cout << "The answer is: " << num1 + num2;
	}
	else if (operation == "-")
	{
		cout << "The answer is: " << num1 - num2;
	}
	else if (operation == "*")
	{
		cout << "The answer is: " << num1 * num2;
	}
	else if (operation == "/")
	{
		cout << "The answer is: " << num1 / num2;
	}
	else if (operation == "sum")
	{
		cout << "The answer is: " << num1 + num2;
	}
	else if (operation == "min")
	{
		cout << "The answer is: " << num1 - num2;
	}
	else if (operation == "mul")
	{
		cout << "The answer is: " << num1 * num2;
	}
	else if (operation == "div")
	{
		cout << "The answer is: " << num1 / num2;
	}

	keep_window_open();
	return 0;
}