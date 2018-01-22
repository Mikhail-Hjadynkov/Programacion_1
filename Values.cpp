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
	double d = 0;
	while (cin >> d)
	{
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d == " << d
			<< "\ni == " << i
			<< "\ni2 == " << i2
			<< "\nchar(" << c << ")\n";
	}
	keep_window_open();
	return 0;
}