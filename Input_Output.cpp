#include <iostream>
#include <string>

using namespace std;

inline void keep_window_open()
{
	char ch;
	cin >> ch;
}

int simple_error()
{
	cout << "You must be kidding..." << endl;
	return 0;
}

int main()
{
	string name, friend_name, your_name;
	char friend_sex = 0;
	int age;

	cout << "<< Write the name of the receiver: ";
	cin >> name;
	cout << "<< Write the name of your friend: ";
	cin >> friend_name;
	cout << "<< Write [m] if your friend is male or [f] if is female: ";
	cin >> friend_sex;
	cout << "<< Write the age of the receiver: ";
	cin >> age;
	cout << "<< Write your name: ";
	cin >> your_name;

	cout << endl << "Dear, " << name << endl;
	cout << endl << "I'm as fine as I can be. So for now... " << endl << endl;
	cout << "These are my last words..." << endl;

	if (friend_sex == 'm')
	{
		cout << endl << "If you see " << friend_name << ", please ask him to call me..." << endl;
	}
	else
	{
		cout << endl << "If you see " << friend_name << ", please ask her to call me..." << endl;
	}
	
	cout << endl << "I hear you just had a birthday and you are " << age << " years old!" << endl;
	if (age < 0 || age > 110)
	{
		simple_error();
	}
	else if (age < 12)
	{
		cout << "Next year you will be" << age + 1 << endl;
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote" << endl;
	}
	else if (age > 70)
	{
		cout << "Next year you are enjoying retirement" << endl;
	}
	
	cout << endl << "Sincerely yours: " << your_name << endl << endl;
	cout << "See you in heaven" << endl;
	keep_window_open();

	return 0;
}