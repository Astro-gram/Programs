// DoYouGotEnoughCool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool areYouThiqqqq(int coolLevel, int loserLevel)
{
	
	return coolLevel*1.5 > (loserLevel*2) ?  true :  false;

}

int main()
{
	string names[5];
	int coolLvls[5];
	int loserLvls[5];

	cout << "ARE YOU COOL ENOUGH?";
	cout << "\nThis is a sheet of people that are eligible to join Fuzz Bug Gang...\n\n";
	cout << "INSTRUCTIONS:\n1. Give 5 people's names.\n2. Give the coolness level and loser level.\n\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Person " << i + 1 << endl;
		cout << "Name: ";
		getline(cin, names[i]);

		string trash;
		cout << "Cool level: ";
		cin >> coolLvls[i];
		getline(cin, trash);

		cout << "Loser level: ";
		cin >> loserLvls[i];
		getline(cin, trash);

		cout << endl;
	}

	cout << "\n------------------------------------------------------------" << endl;

	cout << "Name:			     Eligible:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << names[i] << "				";
		areYouThiqqqq(coolLvls[i], loserLvls[i]) ? cout << "Yes\n" : cout << "No\n";
	}

	cout << "\n------------------------------------------------------------\n\n" << endl;

	system("pause");
}

