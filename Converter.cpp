#include <iostream>

using namespace std;

inline void keep_window_open()
{
	char ch;
	cin >> ch;
}

int main()
{
	int miles;
	cout << "Number of miles to convert: ";
	cin >> miles;
	cout << "There are " << miles / 1.609 << " kilometers in " << miles << " miles.";
	keep_window_open();
	return 0;
}