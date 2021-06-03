// New_Stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool areYouThiqqqq(int coolLevel, int loserLevel)
{
	int avgCoolLevel = 2;
	int level = ((coolLevel % 100) + (loserLevel % 100)) / avgCoolLevel;
	if (level > 20)
		return true;
	else
		return false;

}

int main()
{
	string names[] = {"brad", "bob"};
	for (int i = 0; i < 2; i++)
	{
		cout << "Name: " << names[i] << "		Thiqqqq: ";
		areYouThiqqqq(60, 1) ? cout << "True" << endl : cout << "False" << endl;

	}
	int num1;
	int num2;
	string trash;
	
	cout << "Coolness level: ";
	cin >> num1;
	getline(cin, trash);

	cout << "Loser level: ";
	cin >> num2;
	getline(cin, trash);
	

	cout << "Are you thiqqqq: ";
	areYouThiqqqq(num1, num2) ? cout << "YES!!" << endl : cout << "no..." << endl;


}

