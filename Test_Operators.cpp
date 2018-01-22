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
	int val1, val2;
	double alt1, alt2;
	cout << "Write number 1 :";
	cin >> alt1;
	val1 = alt1;
	cout << "Write number 2 :";
	cin >> alt2;
	val2 = alt2;
	cout << endl;
	if (alt1 < alt2)
	{
		cout << "Smaller Double: " << alt1 << endl;
		cout << "Bigger Double: " << alt2 << endl;
		cout << "Difference Double: " << alt2 - alt1 << endl;
		cout << "Ratio Double: " << alt1 / alt2 << endl;
	}
	else
	{
		cout << "Smaller Double: " << alt2 << endl;
		cout << "Bigger Double: " << alt1 << endl;
		cout << "Difference Double: " << alt1 - alt2 << endl;
		cout << "Ratio Double: " << alt2 / alt1 << endl;
	}
	cout << "Sum Double: " << alt1+alt2 << endl;
	cout << "Product Double: " << alt1*alt2 << endl;

	if (val1 < val2)
	{
		cout << "Smaller Integer: " << val1 << endl;
		cout << "Bigger Integer: " << val2 << endl;
		cout << "Difference Integer: " << val2 - val1 << endl;
		cout << "Ratio Integer: " << val1 / val2 << endl;
	}
	else
	{
		cout << "Smaller Integer: " << val2 << endl;
		cout << "Bigger Integer: " << val1 << endl;
		cout << "Difference Integer: " << val1 - val2 << endl;
		cout << "Ratio Integer: " << val2 / val1 << endl;
	}
	cout << "Sum Integer: " << val1 + val2 << endl;
	cout << "Product Integer: " << val1*val2 << endl;
	keep_window_open();
	return 0;
}