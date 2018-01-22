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
	int penny, nickel, dime, quart, half;
	double total;
	cout << "How many pennies do you have?: ";
	cin >> penny;
	cout << "How many nickels do you have?: ";
	cin >> nickel;
	cout << "How many dimes do you have?: ";
	cin >> dime;
	cout << "How many quarter dollars do you have?: ";
	cin >> quart;
	cout << "How many half dollars do you have?: ";
	cin >> half;
	cout << endl;
	if (penny == 1)
	{
		cout << "You have " << penny << " penny" << endl;
	}
	else
	{
		cout << "You have " << penny << " pennies" << endl;
	}
	if (nickel == 1)
	{
		cout << "You have " << nickel << " nickel" << endl;
	}
	else
	{
		cout << "You have " << nickel << " nickels" << endl;
	}
	if (dime == 1)
	{
		cout << "You have " << dime << " dime" << endl;
	}
	else
	{
		cout << "You have " << dime << " dimes" << endl;
	}
	if (quart == 1)
	{
		cout << "You have " << quart << " quarter dollar" << endl;
	}
	else
	{
		cout << "You have " << quart << " quarter dollars" << endl;
	}
	if (half == 1)
	{
		cout << "You have " << half << " half dollar" << endl;
	}
	else
	{
		cout << "You have " << half << " half dollars" << endl;
	}
	total = penny + (nickel * 5) + (dime * 10) + (quart * 25) + (half * 50);
	cout << "You have in total " << total << " cents or "
		<< total / 100 << " dollars." << endl;
	keep_window_open();
	return 0;
}