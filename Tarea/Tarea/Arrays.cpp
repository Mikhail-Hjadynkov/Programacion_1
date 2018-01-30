#include<iostream>
#include<Windows.h>
#include<tuple>
#include<string>

using namespace std;

int main()
{
	int lenght, height, area, perimeter;

	cout << "Get rectangle lenght: ";
	cin >> lenght;
	cout << "Get rectangle height: ";
	cin >> height;
	cout << endl;

	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	tie(area, perimeter) = rectangle(lenght, height);

	cout << "Perimeter: " << perimeter << endl;
	cout << "Area" << area << endl;

	system("pause");
	return 0;
}


tuple<int, int> rectangle(int &a, int&b)
{
	return make_tuple(a + a + b + b, a*b);
}