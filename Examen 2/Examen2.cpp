//External Declarations
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>
#include <algorithm>

using namespace std;

enum WORDTYPE
{
	SUBJECT,
	ADJECTIVE,
	VERB,
	ADVERB,
	PREPOSITION,
	NOUN,
};

int main()
{
	//Declarations
	vector<string> subject, adjective, verb, adverb, preposition, noun, phrase;
	int counter = 0, advisor = 0, randomizer = 0;
	string iname, oname, input;

	//Introduction
	cout << "---PHRASE MAKER---" << endl;

	//File reading
	cout << "Please write the file name to use: ";
	cin >> iname;
	ifstream ist{ iname };

	//Word clasification
	cout << endl << ">> RECEIVED WORDS:" << endl;
	while (getline(ist, input))
	{
		if (input == "Sujeto" || input == "Subject")
		{
			advisor = SUBJECT;
		}
		else if(input == "Adjetivo" || input == "Adjective")
		{
			advisor = ADJECTIVE;
		}
		else if (input == "Verbo" || input == "Verb")
		{
			advisor = VERB;
		}
		else if (input == "Adverbio" || input == "Adverb")
		{
			advisor = ADVERB;
		}
		else if (input == "Preposicion" || input == "Preposition")
		{
			advisor = PREPOSITION;
		}
		else if (input == "Sustantivo" || input == "Noun")
		{
			advisor = NOUN;
		}
		else
		{
			switch (advisor)
			{
			case SUBJECT:
				subject.push_back(input);
				break;
			case ADJECTIVE:
				adjective.push_back(input);
				break;
			case VERB:
				verb.push_back(input);
				break;
			case ADVERB:
				adverb.push_back(input);
				break;
			case PREPOSITION:
				preposition.push_back(input);
				break;
			case NOUN:
				noun.push_back(input);
				break;
			}
		}
		
	}

	subject.erase(subject.begin()); //Added to erase a unknown declaration

	//Word clasification
	cout << "SUBJECTS" << endl;
	for (int i = 0; i<subject.size(); i++)
	{
		cout << subject[i] << endl;
	}
	cout << endl;
	cout << "ADJECTIVES" << endl;
	for (int i = 0; i<adjective.size(); i++)
	{
		cout << adjective[i] << endl;
	}
	cout << endl;
	cout << "VERBS" << endl;
	for (int i = 0; i<verb.size(); i++)
	{
		cout << verb[i] << endl;
	}
	cout << endl;
	cout << "ADVERBS" << endl;
	for (int i = 0; i<adverb.size(); i++)
	{
		cout << adverb[i] << endl;
	}
	cout << endl;
	cout << "PREPOSITIONS" << endl;
	for (int i = 0; i<preposition.size(); i++)
	{
		cout << preposition[i] << endl;
	}
	cout << endl;
	cout << "NOUNS" << endl;
	for (int i = 0; i<noun.size(); i++)
	{
		cout << noun[i] << endl;
	}
	cout << endl;


	//File writing
	cout << "Please write output file name: ";
	cin >> oname;
	ofstream ost{ oname };

	//Phrase making
	cout << endl << "<< FILE PREVIEW" << endl;
	for (int c = 0; c < 8; c++)//<-That reference tho
	{
		randomizer = rand() % subject.size();
		phrase.push_back(subject[randomizer]);
		phrase.push_back(" ");
		randomizer = rand() % adjective.size();
		phrase.push_back(adjective[randomizer]);
		phrase.push_back(" ");
		randomizer = rand() % verb.size();
		phrase.push_back(verb[randomizer]);
		phrase.push_back(" ");
		randomizer = rand() % adverb.size();
		phrase.push_back(adverb[randomizer]);
		phrase.push_back(" ");
		randomizer = rand() % preposition.size();
		phrase.push_back(preposition[randomizer]);
		phrase.push_back(" ");
		randomizer = rand() % noun.size();
		phrase.push_back(noun[randomizer]);
		phrase.push_back(".");

		for (int p = 0; p < phrase.size(); p++)
		{
			cout << phrase[p];
			ost << phrase[p];
		}
		cout << endl;
		ost << endl;
		phrase.clear();
	}
	cout << endl;

	system("pause");
	return 0;
}