#include <iostream>
#include <windows.h>
#include <exception>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

void keep_window_open()
{
	system("pause");
}

int drill()
{
	try
	{
		cout << "Success! 1\n"; //cout written with a capital C
		cout << "Success! 2\n"; //Missed to close double quote marks
		cout << "Success" << "! 3\n"; //Missed to open double quotes and to use final semicolon
		cout << "Success 4" << '\n'; //Output without double quotes
		char res = 7; vector<int> v(10); v[5] = res; cout << "Success! 5\n"; //Changed from string to char
		vector<int> q(10); q[5] = 7; if (q[5] != 7) cout << "Success! 6\n"; //Vector index use [] and not ()
		char cond; cin >> cond; if (cond=='s') cout << "Success! 7\n"; else cout << "Fail!\n"; //Cond hasn't been identified nor compared
		bool f = false; if (f) cout << "Success! 8\n"; else cout << "Fail!\n"; //Compiled
		string s = "ape"; bool b = "fool"<s; if (b) cout << "Success! 9\n"; //Missed a letter on bool type
		string z = "ape"; if (z == "fool") cout << "Success! 10\n"; //Compiled
		string n = "ape"; if (n == "fool") cout << "Success! 11\n"; //Missed an angular bracket
		string t = "ape"; if (t == "fool") cout << "Success! 12\n"; //Unidentified comparison and angular bracket missing
		vector<char> a(5); for (int i = 0; 0<a.size(); ++i); cout << "Success! 13\n"; //Compiled
		vector<char> k(5); for (int i = 0; i <= k.size(); ++i); cout << "Success! 14\n"; //Compiled
		string l = "Success! 15\n"; for (int i = 0; i<6; ++i) cout << l[i]; // Compiled
		if (true) cout << "Success! 16\n"; else cout << "Fail!\n"; //'Then' is an incorrect expression
		int x = 2000; char c = x; if (c == 2000) cout << "Success! 17\n"; //Compiled
		string p = "Success! 18\n"; for (int i = 0; i<10; ++i) cout << p[i]; //Compiled
		vector <int> g(5); for (int i = 0; i <= g.size(); ++i); cout << "Success! 19\n"; //Missed vector's data type
		int w = 0; int j = 9; while (w<10) ++j; if (j<w) cout << "Success! 20\n"; //Compiled
		int y = 2; double h = 5 / (y-2); if (h == 2 * y + 0.5) cout << "Success! 21\n"; // Incorrect hyphen used for substraction
		string m = "Success! 22\n"; for (int i = 0; i < m.size(); ++i) cout << m[i]; //String does not need a type declaration plus range overflow
		int i = 0; while (i<10) ++j; if (j<i) cout << "Success! 23\n"; //Compiled
		int o = 4; double d = 5 / (o-2); if (d = 2 * o + 0.5) cout << "Success! 24\n"; //Incorrect hyphen used for substraction
		cout << "Success! 25\n"; //cin is not used for output, but for input

		keep_window_open();
		return 0;
	}
	catch (exception& e) 
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) 
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}

double ctok(double c) // converts Celsius to Kelvin
{
	try
	{
		if (c < -273.15)
		{
			throw c;
			return 1;
		}
		else
		{
			int k = c + 273.15;
			return k;
		}
	}
	catch (double c)
	{
		cerr << "ERROR: The converter cannot handle " << c << " Celsius degrees. It surpasses absolute 0 limit." << endl << endl;
	}
}

double ctof(double c) // converts Celsius to Fahrenheit
{
	try
	{
		if (c < -273.15)
		{
			throw c;
			return 1;
		}
		else
		{
			int k = (c - 32) / 1.8;
			return k;
		}
	}
	catch (double c)
	{
		cerr << "ERROR: The converter cannot handle " << c << " Celsius degrees. It surpasses absolute 0 limit." << endl << endl;
	}
}

int converter()
{
	double c = 0; // declare input variable
	cout << "---TEMPERATURE CONVERTER---"<< endl;
	cout << "Insert a temperature in C" << char(248) << ": ";
	cin >> c; // retrieve temperature to input variable
	cout << endl;
	double k = ctok(c); // convert temperature
		if(c>-273.15)
		{
			cout << "Your temperature in Kelvin is: " << k << "K" << endl;
		}
	double f = ctof(c);
	return 0;

}

int equation()
{
	cout << "---QUADRATIC EQUATIONS---" << endl;
	double a, b, c, x1, x2, root;
	cout << "Insert the value for A: ";
	cin >> a;
	cout << "Insert the value for B: ";
	cin >> b;
	cout << "Insert the value for C: ";
	cin >> c;
	
	try
	{
		root = (b*b) - (4 * (a*c));
		if (root <= 0)
		{
			throw root;
			return 1;
		}
		else
		{
			cout << endl << "-Input-" << endl;
			cout << a << "x" << char(253) << " + " << b << "x" << " + " << c << " = 0";
			x1 = ((-b) + sqrt(root)) / (2 * a);
			x2 = ((-b) - sqrt(root)) / (2 * a);
			cout << endl << "-Result-" << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
			return 0;
		}
	}
	catch(double num)
	{
		cerr << "MATH_ERROR: Square root of 0 or lower number" << endl;
	}
}

int bull_n_cow()
{
	vector <int> key{ 1,2,3,4 };
	vector <int> tryouts;
	int num1, num2, num3, num4, correct = 0, possible = 0;
	string e;
	cout << "---GUESSING GAME---" << endl;
	while (correct != 4)
	{
		try
		{
			cout << "Insert your guess for the first number: ";
			cin >> num1;
			if (!cin)
			{
				throw runtime_error(e);
			}
			else
			{
				tryouts.push_back(num1);
			}
			cout << "Insert your guess for the second number: ";
			cin >> num2;
			if (!cin)
			{
				throw runtime_error(e);
			}
			else
			{
				tryouts.push_back(num2);
			}
			cout << "Insert your guess for the third number: ";
			cin >> num3;
			if (!cin)
			{
				throw runtime_error(e);
			}
			else
			{
				tryouts.push_back(num3);
			}
			cout << "Insert your guess for the fourth number: ";
			cin >> num4;
			if (!cin)
			{
				throw runtime_error(e);
			}
			else
			{
				tryouts.push_back(num4);
			}
			cout << endl;
		}
		catch(runtime_error& t)
		{
			cerr << "RUNTIME_ERROR: Incorrect input. Only integers accepted." << endl;
			return 1;
		}

		for (int i = 0; i < key.size(); i++)
		{
			for (int c = 0; c < key.size(); c++)
			{
				if (key[i] == tryouts[c] && i == c)
				{
					correct += 1;
				}
				else if (key[i] == tryouts[c] && i != c)
				{
					possible += 1;
				}
			}
		}
		cout << "You have guessed " << correct << " numbers out of 4" << endl;
		cout << "You have " << possible << " numbers that exist but are misplaced" << endl << endl;
	}
	cout << "Congratulations! You've guessed the number!" << endl;
	return 0;
}

int main()
{
	{
		int selection;
		cout << "FUNCTION SELECTION" << endl;
		cout << "0) Drill" << endl;
		cout << "2) Temperature	Converter" << endl;
		cout << "7) Quadratic Equations" << endl;
		cout << "12) Guessing Game" << endl;
		cout << "Select a function: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case 0:
			drill();
			break;

		case 2:
			converter();
			break;

		case 7:
			equation();
			break;

		case 12:
			bull_n_cow();
			break;
		}

		system("pause");
		return 0;
	}
}