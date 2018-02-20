#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>
#include <algorithm>

using namespace std;

void keep_window_open()
{
	system("pause");
}

void error(const char* error)
{
	try
	{
		throw error;
	}
	catch (const char* err)
	{
		cerr << "Error: " << err << endl;
	}
}

struct Point
{
	int x;
	int y;
};

struct Reading { // a temperature reading
	int hour; // hour after midnight [0:23]
	double temperature; // in Fahrenheit
	char medition; //f or c
};

void drill()
{
	int counter = 1, checked = 0;
	int x;
	int y;
	cout << "---POINTS MANAGER---" << endl;

	string oname;
	cout << "Please enter name of output file: ";
	cin >> oname;
	cout << endl;
	ofstream ost{ oname }; // ost writes to a file named oname
	if (!ost)
	{
		error("can't open output file ");
	}

	vector<Point> original_points; // store the readings here
	while (counter <= 7)
	{
		cout << "Write the pair " << counter << " of x and y data: ";
		cin >> x >> y;
		original_points.push_back(Point{ x, y });
		counter++;
	}
	cout << endl;
	cout << "File output preview:" << endl;
	for (int i = 0; i < original_points.size(); ++i)
	{
		cout << '(' << original_points[i].x << ',' << original_points[i].y << ")\n";
		ost << original_points[i].x << " " << original_points[i].y << endl;
	}
	cout << endl;

	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist{ iname }; // ist reads from the file named iname
	if (!ist)
	{
		error("can't open input file ");
	}
	cout << endl;
	cout << "File input preview:" << endl;
	vector<Point> processed_points; // store the readings here
	while (ist >> x >> y)
	{
		processed_points.push_back(Point{ x,y });
	}
	for (int i = 0; i < processed_points.size(); ++i)
	{
		cout << '(' << processed_points[i].x << ',' << processed_points[i].y << ")\n";
	}
	cout << endl;

	for (int index = 0; index < processed_points.size(); index++)
	{
		if (processed_points[index].x == original_points[index].x && processed_points[index].y == original_points[index].y)
		{
			 checked++;
		}
	}
	if (checked != original_points.size())
	{
		cout << "Something may be wrong." << endl << endl;
	}
	else
	{
		cout << "Data extraction successful." << endl << endl;
	}
}

double sums()
{
	double sum = 0, number;
	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist{ iname }; // ist reads from the file named iname
	if (!ist)
	{
		error("can't open output file ");
	}
	cout << endl;
	while (ist >> number)
	{
		sum += number;
	}
	return sum;
}

void temperatures()
{
	int hour, counter=1;
	double temperature, mean=0, median=0;
	char medition;

	string oname;
	cout << "Please enter name of the file to create: ";
	cin >> oname;
	ofstream ost{ oname }; // ost writes to a file named oname
	if (!ost) error("can't create file");
	vector<Reading> readings; // store the readings here
	do
	{
		cout << "Write the number " << counter << " hourly temperature (hr / tmp / msy): ";
		cin >> hour >> temperature >> medition;
		if (medition == 'c')
		{
			temperature = temperature * 1.8 + 32;
			medition = 'f';
		}
		readings.push_back(Reading{ hour, temperature, medition });
		counter++;
	} while (counter<6);
	for (int i = 0; i < readings.size(); ++i)
	{
		ost << readings[i].hour << " " << readings[i].temperature << " " << readings[i].medition << endl;
	}
	
	cout << endl << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist{ iname }; // ist reads from the file named iname
	if (!ist) error("can't open input file");

	vector<Reading> temps; // store the readings here
	while (ist >> hour >> temperature >> medition) 
	{
		if (hour < 0 || 23 <hour) error("hour out of range");
		if (medition != 'f' && medition != 'c') error("unavailable medition system");
		temps.push_back(Reading{ hour,temperature,medition });
	}
	cout << endl;
	cout << "Mean temperature from " << iname << " archive readings: ";
	for (int i = 0; i < temps.size(); ++i)
	{
		mean += temps[i].temperature;
	}
	mean /= temps.size();
	cout << mean << "f" << endl;

	cout << "Median temperature from " << iname << " archive readings: ";
	vector<double> sorts;
	for (int i = 0; i < temps.size(); ++i)
	{
		sorts.push_back(temps[i].temperature);
	}
	sort(sorts.begin(), sorts.end());
	if (sorts.size() % 2 != 0)
	{
		median = sorts[sorts.size() / 2];
	}
	else
	{
		median = ((sorts[sorts.size() / 2] + (sorts[sorts.size() / 2] + 1)) / 2);
	}
	cout << median << "f" << endl << endl;
}

int main()
{
	int selection;
	cout << "FUNCTION SELECTION" << endl;
	cout << "0) Drill" << endl;
	cout << "1) Sums" << endl;
	cout << "2) Temperatures" << endl;
	cout << "Select a function: ";
	cin >> selection;
	cout << endl;

	switch (selection)
	{
	case 0:
		drill();
		break;

	case 1:
		cout << "The sum from the numbers file is: " << sums() << endl << endl;
		break;

	case 2:
		temperatures();
		break;
	}

	system("pause");
	return 0;
}