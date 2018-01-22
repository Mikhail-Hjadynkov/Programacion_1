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
	string s1, s2, s3;
	int n1, n2, n3;
	cout << "Write string 1: ";
	cin >> s1;
	cout << "Write string 2: ";
	cin >> s2;
	cout << "Write string 3: ";
	cin >> s3;
	cout << "Write number 1: ";
	cin >> n1;
	cout << "Write number 2: ";
	cin >> n2;
	cout << "Write number 3: ";
	cin >> n3;


	if (n1 > n2 && n1 > n3)
	{
		if (n2 > n3)
		{
			cout << "Numbers from major to minor: " << n1 << " " << n2 << " " << n3 << endl;
		}
		else if (n3 > n2)
		{
			cout << "Numbers from major to minor: " << n1 << " " << n3 << " " << n2 << endl;
		}
	}
	if (n2 > n1 && n2 > n3)
	{
		if (n1 > n3)
		{
			cout << "Numbers from major to minor: " << n2 << " " << n1 << " " << n3 << endl;
		}
		else if (n3 > n1)
		{
			cout << "Numbers from major to minor: " << n2 << " " << n3 << " " << n1 << endl;
		}
	}
	if (n3 > n2 && n3 > n1)
	{
		if (n2 > n1)
		{
			cout << "Numbers from major to minor: " << n3 << " " << n2 << " " << n1 << endl;
		}
		else if (n1 > n2)
		{
			cout << "Numbers from major to minor: " << n3 << " " << n1 << " " << n2 << endl;
		}
	}

	if (s1 < s2 && s1 < s3)
	{
		if (s2 < s3)
		{
			cout << "Strings from minor to major: " << s1 << " " << s2 << " " << s3 << endl;
		}
		else if (s3 < s2)
		{
			cout << "Strings from minor to major: " << s1 << " " << s3 << " " << s2 << endl;
		}
	}
	if (s2 < s1 && s2 < s3)
	{
		if (s1 < s3)
		{
			cout << "Strings from minor to major: " << s2 << " " << s1 << " " << s3 << endl;
		}
		else if (s3 < s1)
		{
			cout << "Strings from minor to major: " << s2 << " " << s3 << " " << s1 << endl;
		}
	}
	if (s3 < s2 && s3 < s1)
	{
		if (s2 < s1)
		{
			cout << "Strings from minor to major: " << s3 << " " << s2 << " " << s1 << endl;
		}
		else if (s1 < s2)
		{
			cout << "Strings from minor to major: " << s3 << " " << s1 << " " << s2 << endl;
		}
	}
	keep_window_open();
	return 0;
}