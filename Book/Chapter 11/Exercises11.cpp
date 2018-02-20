#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
#include <ios>

using namespace std;

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

void clasificator()
{
	cout << "---NUMBER CLASIFICATOR---" << endl;
	cout << "Please enter numbers in any format. (Use 0 to indicate that you are finished): ";
	int x;
	cin.unsetf(ios::dec);
	cin.unsetf(ios::oct);
	cin.unsetf(ios::hex);
	cout << showbase;
	while (cin >> x && x != 0) {
		cout << hex << x << '\t'
			<< oct << x << '\t'
			<< dec << x << endl;
	}

	cout << "Please enter more free format numbers: ";
	char ch;
	while (cin.get(ch)) {
		if (ch == '0') {
			cin.get(ch);
			if (ch == 'x' || ch == 'X') 
			{	// read hexadecimal
				cin >> hex >> x;
				cout << hex << setw(12) << x << " hexadecimal converts to " << dec << setw(12) << x << " decimal" <<endl;
			}
			else if (isdigit(ch))
			{	// read octal
				cin.unget();	// put character back
				cin >> oct >> x;
				cout << oct << setw(12) << x << " octal       converts to " << dec << setw(12) << x << " decimal" << endl;
			}
			else 
			{	// it was plain 0
				cin.unget();	// put character back
				cout << oct << setw(12) << x << " octal       converts to " << dec << setw(12) << x << " decimal" << endl;
			}
		}
		else if (isdigit(ch)) 
		{	// read decimal
			cin.unget();	// put character back
			cin >> dec >> x;
			cout << dec << setw(12) << x << " decimal     converts to " << dec << setw(12) << x << " decimal" << endl;
		}
	}
}

void drill()
{
	int t_number;
	double f_number;
	cout << "---TRANSFORM(A)NUMBER---" << endl;
	
	cin.unsetf(ios::dec); // Checks syntax for decimal to set number to decimal
	cin.unsetf(ios::oct); // Checks 0 to set number to octal
	cin.unsetf(ios::hex); // Checks for 0x to set number to hexadecimal
	
	cout << "Input any number: ";
	cin >> t_number;
	cout << "Dec\t" << "Hex\t" << "Oct\t" << endl;
	cout << t_number << '\t' << showbase << hex << t_number << '\t' << showbase << oct << t_number << endl << endl;
	
	cout << "---FORMAT(A)NUMBER---" << endl;
	cout << "Input any floating point number: ";
	cin >> f_number;
	cout << "Def\t" << "Fix\t" << "Sci\t" << endl;
	cout << defaultfloat << setprecision(3) << f_number << '\t' << fixed << f_number << '\t' << scientific << f_number << endl;

	cout << "---TABLE of TERRITORIES---" << endl;
	cout << "(C) Ministry of Naanda 1900" << endl << endl;
	cout << "COUNTRY" << setw(15) << "TERRITORY" << setw(15) << "CITY" << setw(15) << endl;
	cout << "Barithrone" << setw(15) << "Barithseine" << setw(15) << "Barithsemeth" << setw(15) << endl;
	cout << "Stallak" << setw(15) << "Atlapajuca" << setw(15) << "Atlacipan" << setw(15) << endl;
	cout << "Hjadynivia" << setw(15) << "Pribet" << setw(15) << "Churnivniy" << setw(15) << endl;
	cout << "Seibara" << setw(15) << "Pernabau" << setw(15) << "Atapu" << setw(15) << endl;
	cout << "Aziram" << setw(15) << "Thrillenby" << setw(15) << "Quinnay" << setw(15) << endl;
	cout << "Sukiharu" << setw(15) << "Tomionata" << setw(15) << "Naharata" << setw(15) << endl;
	cout << "Nativia" << setw(15) << "Taipalia" << setw(15) << "Matchatka" << setw(15) << endl;
	cout << "Freirennessia" << setw(15) << "Sauvoyaume" << setw(15) << "Avantalasse" << setw(15) << endl;
	cout << "Kindelstadt" << setw(15) << "Septenfeld" << setw(15) << "Windftalen" << setw(15) << endl;
	cout << "Naadnut" << setw(15) << "Cenitalia" << setw(15) << "Natare" << setw(15) << endl;
}

void lower()
{
	string iname, oname;
	char word;
	cout << "---LOWERCASE CONVERTER---" << endl;
	cout << "Please write the file name to convert: ";
	cin >> iname;
	ifstream ist{ iname };
	if (!ist)
	{
		error("can't open input file ");
	}
	cout<<endl;
	string input, converter;
	getline(ist, input);
	for (int i = 0; i < input.size(); i++)
	{
		converter.push_back(tolower(input[i]));
	}
	
	cout << "Please write the name of the output file: ";
	cin >> oname;
	ofstream ost{ oname };
	if (!ost)
	{
		error("can't open output file ");
	}
	ost << converter << endl;
}

void finder()
{
	int counter=0;
	string iname, processor, finder, searcher;
	cout << "---WORD FINDER---" << endl;
	cout << "Please write the file name: ";
	cin >> iname;
	cout << "Please write the word to find: ";
	cin >> finder;
	ifstream ist{ iname };
	if (!ist)
	{
		error("cannot open input file");
	}
	cout << "FINDS LIST:" << endl;
	while (getline(ist, processor))
	{
		counter++;
		stringstream comparator{ processor };
		for (string searcher; comparator >> searcher;)
		{
			if (searcher == finder)
			{
				cout << "Line: " << counter << "\t Text: " << processor << endl;
			}
		}
	}

}

void disemvowels()
{
	string iname, text, disemvowel;
	cout<<"---DISEMVOWELS---"<<endl;
	cout << "Please write the name of the file you wanna use: ";
	cin >> iname;
	ifstream ist{ iname };
	cout<<endl<<"-DISEMVOWELED TEXT-"<<endl;
	while (getline(ist, text))
	{
		for(int i=0;i<text.size();i++)
		{ 
			if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u')
			{
				disemvowel.push_back(text[i]);
			}
		}
		disemvowel.push_back('\n');
	}
	cout << disemvowel << endl;
}

void ch_clasificator()
{
	string text;
	cout << "---CHARACTER CLASIFICATOR---" << endl;
	cout << "Please write text: ";
	cin.ignore();
	getline(cin, text);
	for (int i = 0; i < text.size(); i++)
	{
		cout << "Character '" << text[i] << "' is:";
		if (isspace(text[i]))
		{
			cout << "-A whitespace, " << endl;
		}
		if (isalpha(text[i]))
		{
			cout << "-A letter, " << endl;
		}
		if (isdigit(text[i]))
		{
			cout << "-A decimal digit, " << endl;
		}
		if (isxdigit(text[i]))
		{
			cout << "-A hexadecimal digit, " << endl;
		}
		if (isupper(text[i]))
		{
			cout << "-A uppercase letter, " << endl;
		}
		if (islower(text[i]))
		{
			cout << "-A lowecase letter, " << endl;
		}
		if (isalnum(text[i]))
		{
			cout << "-A letter or decimal digit, " << endl;
		}
		if (iscntrl(text[i]))
		{
			cout << "-A control character, " << endl;
		}
		if (ispunct(text[i]))
		{
			cout << "-A not a letter, digit, whitespace, or invisible control character, " << endl;
		}
		if (isprint(text[i]))
		{
			cout << "printable, " << endl;
		}
		if (isgraph(text[i]))
		{
			cout << "isalpha() or isdigit() or ispunct(), " << endl;
		}
		cout << endl;
	}
}

int main()
{
	int selection;
	cout << "FUNCTION SELECTION" << endl;
	cout << "0) Drill" << endl;
	cout << "1) LowerCase Converter" << endl;
	cout << "2) Word Finder" << endl;
	cout << "3) Disemvowels" << endl;
	cout << "4) Number Clasificator" << endl;
	cout << "5) Character Calsificator" << endl;
	cout << "Select a function: ";
	cin >> selection;
	cout << endl;

	switch (selection)
	{
	case 0:
		drill();
		break;

	case 1:
		lower();
		break;

	case 2:
		finder();
		break;

	case 3:
		disemvowels();
		break;

	case 4:
		clasificator();
		break;

	case 5:
		ch_clasificator();
		break;
	}

	system("pause");
	return 0;
}