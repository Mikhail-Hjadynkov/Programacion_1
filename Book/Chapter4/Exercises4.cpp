#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int drill()
{
	int part;
	cout << "---DRILL---" << endl;
	cout << "Phase 1: Simple integer/float comparison" << endl;
	cout << "Phase 2: Number order tracking" << endl;
	cout << "Phase 3: Unit conversions" << endl;
	cout << "Select drill phase: ";
	cin >> part;
	cout << endl;
	if (part == 1)
	{
		char option = '&';
		float flo1 = 0, flo2 = 0;
		int num1 = 0, num2 = 0;
		double flt, flt_big, flt_sml;
		while (option != '|')
		{
			cout << "Insert number 1: ";
			cin >> flo1;
			cout << "Insert number 2: ";
			cin >> flo2;
			cout << endl << "Your first number is: " << flo1 << endl;
			cout << "Your second number is: " << flo2 << endl << endl;

			if (flo1 > flo2)
			{
				cout << endl << "The bigger number is: " << flo1 << endl;
				if ((num1 - num2) < .01)
				{
					cout << "Both numbers are close to each other! " << flo1 << endl;
				}
			}
			else if (flo1 < flo2)
			{
				cout << endl << "The bigger number is: " << flo2 << endl;
				if ((num2 - num1) < .01)
				{
					cout << "Both numbers are almost equal! " << flo1 << endl;
				}
			}
			else
			{
				cout << endl << "Both numbers are equal " << endl;
			}

			cout << "Do you wanna exit? (| = yes): ";
			cin >> option;
			cout << endl;

		}
		return 0;
	}
	else if (part == 2)
	{
		char option = '&';
		int cont = 0;
		double flt, flt_big = 0, flt_sml = 0;
		while (option != '|')
		{
			cout << "Insert a number: ";
			cin >> flt;

			if (cont < 1)
			{
				flt_big = flt;
				flt_sml = flt;
			}
			else if (flt > flt_big)
			{
				flt_big = flt;
			}
			else if (flt < flt_sml)
			{
				flt_sml = flt;
			}
			cout << "Biggest number so far: " << flt_big << endl;
			cout << "Smallest number so far: " << flt_sml << endl;
			cont++;

			cout << "Do you wanna exit? (| = yes): ";
			cin >> option;
			cout << endl;
		}

	}
	else if (part == 3)
	{
		char option = '&';
		int cont = 0;
		double value, meter_sum = 0, val_big, val_sml;
		vector<double> meters;
		string unit;

		while (option != '|')
		{
			cout << "Insert a unit value (cm, m, ft, in): ";
			cin >> value >> unit;

			if(unit == "cm")
			{
				value *= .01;
				meters.push_back(value);
				meter_sum += value;
				if (cont < 1)
				{
					val_big = value;
					val_sml = value;
				}
				else if (value > val_big)
				{
					val_big = value;
				}
				else if (value < val_sml)
					{
						val_sml = value;
					}
			}
			else if (unit == "m")
			{
				value *= 1;
				meters.push_back(value);
				meter_sum += value;
				if (cont < 1)
				{
					val_big = value;
					val_sml = value;
				}
				else if (value > val_big)
				{
					val_big = value;
				}
				else if (value < val_sml)
				{
					val_sml = value;
				}
			}
			else if (unit == "in")
			{
				value *= .0256;
				meters.push_back(value);
				meter_sum += value;
				if (cont < 1)
				{
					val_big = value;
					val_sml = value;
				}
				else if (value > val_big)
				{
					val_big = value;
				}
				else if (value < val_sml)
				{
					val_sml = value;
				}
			}
			else if (unit == "ft")
			{
				value *= .3048;
				meters.push_back(value);
				meter_sum += value;
				if (cont < 1)
				{
					val_big = value;
					val_sml = value;
				}
				else if (value > val_big)
				{
					val_big = value;
				}
				else if (value < val_sml)
				{
					val_sml = value;
				}
			}
			else
			{
				cout << "Invalid unit. Try again, please." << endl << endl;
			}
			cont++;

			cout << "Biggest value so far: " << val_big << " m." << endl;
			cout << "Smallest value so far: " << val_sml << " m." << endl;
			cout << "The values inserted converted to meters:";
			sort(meters.begin(), meters.end());

			for (int i = 0; i < meters.size(); i++)
			{
				cout << " " << meters[i] << ",";
			}
			cout << endl << "Total sum of meters: " << meter_sum << endl;


			cout << "Do you wanna exit? (| = yes): ";
			cin >> option;
			cout << endl;
		}
	}
}

int cities()
{
	char option = '&';
	vector<double> cities;
	double distance, sum=0;

	while (option != '|')
	{
		cout << "---CITIES---" << endl;
		cout << "Please insert a distance: ";
		cin >> distance;
		sum += distance;
		cities.push_back(distance);
		sort(cities.begin(), cities.end());
		cout << endl << "The sum of all distances: " << sum;
		cout << endl << "The largest distance: " << cities[(cities.size() - 1)];
		cout << endl << "The smallest distance: " << cities[0];
		cout << endl << "The mean distance between cities: " << sum/cities.size();

		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}

int calculator()
{
	char option = '&', sign;
	double num1, num2;

	while (option != '|')
	{
		cout << "---CALCULATOR---" << endl;
		cout << "Please insert a formula (num1 num2 operator): ";
		cin >> num1 >> num2 >> sign;
		switch (sign)
		{
		case '+':
			cout << "The addition of " << num1 << " + " << num2 << " is: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "The substraction of " << num1 << " - " << num2 << " is: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "The multiplication of " << num1 << " * " << num2 << " is: " << num1 * num2 << endl;
			break;
		case '/':
			cout << "The division of " << num1 << " / " << num2 << " is: " << num1 / num2 << endl;
			break;
		default:
			cout << "Invalid operator. Try again. (Accepted operators: +, -, *, /)" << endl;
			break;
		}

		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}

int translator()
{
	char option = '&';
	int number;
	vector<string> translated{"one","two","three","four","five","six","seven","eight","nine","ten"};

	while (option != '|')
	{
		cout << "---TRANSLATOR---" << endl;
		cout << "Please insert a number: ";
		cin >> number;
		cout << "Your number is a " << translated[number-1] << endl;

		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}

int squares()
{
	char option = '&';
	while (option != '|')
	{
		cout << "---SQUARES---" << endl;
		int square, rice = 1, back_count, limit;
		double total = 1;

		cout << "Write a number of rice grains: ";
		cin >> limit;
		for (square = 0; rice <= limit; square++)
		{
			back_count = rice;
			rice *= 2;
		}
		for (int i = 0; i <= 64; i++)
		{
			total *= 2;
		}
		cout << "Square: " << square << endl;
		cout << "Total rice: " << rice << endl;
		cout << "The final rice prize is of: " << total << " grains of rice" << endl;

		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}

int quadratic()
{
	char option = '&';
	while (option != '|')
	{
		cout << "---QUADRATIC EQUATIONS---" << endl;
	    double a, b, c, x1, x2;
		cout << "Insert the value for A: ";
		cin >> a;
		cout << "Insert the value for B: ";
		cin >> b;
		cout << "Insert the value for C: ";
		cin >> c;
		cout << endl << "-Input-" << endl;
		cout << a << "x" << char(253) << " + " << b << "x" << " + " << c << " = 0";
		x1 = ((-b) + sqrt((b*b) - (4 * (a*c)))) / (2 * a);
		x2 = ((-b) - sqrt((b*b) - (4 * (a*c)))) / (2 * a);
		cout << endl << "-Result-" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}

int scores()
{
	char option = '&';
	vector<int> scores;
	vector<string> names;
	int score, comprobation = 0;
	string name;
	bool flag = false;
	cout << "---SCORES---" << endl;
	while (option != '|')
	{
		cout << "-Data Database-" << endl;
		cout << "Insert a name and its score: ";
		cin >> name >> score;
		names.push_back(name);
		scores.push_back(score);

		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}

	names.push_back("NoName");
	scores.push_back(0);
	option = '&';

	while (option != '|')
	{
		cout << "-Lookup-" << endl;
		cout << "Insert a name to search: ";
		cin >> name;
		while (flag == false)
		{
			for (int i = 0; i < names.size(); i++)
			{
				if (names[i] == name)
				{
					flag = true;
					cout << "Name: " << names[i] << endl;
					cout << "Score: " << scores[i] << endl << endl;
					comprobation += 1;
				}
			}
			if (comprobation == 0)
			{
				cout << "NO NAME FOUND!" << endl;
				cout << "Name: " << names[names.size() - 1] << endl;
				cout << "Score: " << scores[scores.size() - 1] << endl << endl;
				break;
			}
		}
		cout << endl << "Insert a score to search: ";
		cin >> score;
		while (flag == false)
		{
			for (int i = 0; i < scores.size(); i++)
			{
				if (scores[i] == score)
				{
					flag = true;
					cout << "Name: " << names[i] << endl;
					cout << "Score: " << scores[i] << endl << endl;
					comprobation += 1;
				}
			}
			if (comprobation == 0)
			{
				cout << "NO SCORE FOUND!" << endl;
				cout << "Name: " << names[names.size() - 1] << endl;
				cout << "Score: " << scores[scores.size() - 1] << endl << endl;
				break;
			}
		}
		cout << endl << "Do you wanna exit? (| = yes): ";
		cin >> option;
		cout << endl;
	}
	return 0;
}


int main()
{
	int selection;
	cout << "FUNCTION SELECTION" << endl;
	cout << "0) Drill" << endl;
	cout << "3) Cities" << endl;
	cout << "5) Calculator" << endl;
	cout << "6) Translator" << endl;
	cout << "8) Squares" << endl;
	cout << "18) Quadratic Equations" << endl;
	cout << "19) Scores" << endl;
	cout << "Select a function: ";
	cin >> selection;

	switch (selection)
	{
	case 0:
		drill();
		break;

	case 3:
		cities();
		break;

	case 5:
		calculator();
		break;

	case 6:
		translator();
		break;

	case 8:
		squares();
		break;

	case 18:
		quadratic();
		break;

	case 19:
		scores();
		break;

	}

	system("pause");
	return 0;
}
