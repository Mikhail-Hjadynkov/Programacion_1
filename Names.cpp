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
	string first, second;
	double age;
	cout << "Write your name: ";
	cin >> first >> second;
	cout << "Write your age: ";
	cin >> age;
	cout << "Hello, " << first << " " << second << " (age: " << age << " years. " << age * 12 << " months.)" << endl;
	keep_window_open();
	return 0;
}
