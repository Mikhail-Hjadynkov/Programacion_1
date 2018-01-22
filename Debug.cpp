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
	string s = "Goodbye, cruel world!";
	cout << s << '\n';
	keep_window_open();
	return 0;
}