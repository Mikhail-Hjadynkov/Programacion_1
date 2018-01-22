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
	int float = 0;
	float long = 12;
	char letter = 'a';
	string character = "32";
	cout << float << long << letter << character;
	keep_window_open();
	return 0;
}