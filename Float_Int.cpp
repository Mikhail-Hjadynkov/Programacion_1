#include <iostream>
#include <string>
#include <math.h>

using namespace std;

inline void keep_window_open()
{
	char ch;
	cin >> ch;
}

int main()
{
	cout << "Enter a integer number: ";
	int n;
	cin >> n;
	float n_float = n;
	cout << "n== " << n
		<< "\nn+1== " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n_float)
		<< "\nmodulo of n with 2 == " << n%2
		<< '\n';
	keep_window_open();
	return 0;
}