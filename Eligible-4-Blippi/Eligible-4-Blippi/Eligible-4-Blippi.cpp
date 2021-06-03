// Eligible-4-Blippi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool blippi(int coolLvls, int loserLvls)
{

	return coolLvls * 1.5 > loserLvls * 2 ? true : false;

}

int main()
{
	string names[5];
	int coolLvls[5];
	int loserLvls[5];
	string trash;
	
	cout << "-- ELIGIBLE FOR BLIPPI GANG --\n\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Person " << i+1 << ":\n";
		cout << "Name: ";
		getline(cin, names[i]);

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
		blippi(coolLvls[i], loserLvls[i]) ? cout << "Yes\n" : cout << "No\n";
	}

	cout << "\n------------------------------------------------------------\n\n" << endl;




	system("pause");
}
