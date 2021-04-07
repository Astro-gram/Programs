// problem_creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int max = 10000000000000;
	srand(time(0));

	int num1 = rand() % max;
	int num2 = rand() % max;
	int operation = rand() % 3;

	int answer;
	if (operation == 0)
	{
		answer = num1 + num2;
		cout << num1 << " + " << num2;
	}
	else if (operation == 1) 
	{
		answer = num1 - num2;
		cout << num1 << " - " << num2;
	}
	else if (operation == 2)
	{
		answer = num1 * num2;
		cout << num1 << " x " << num2;
	}

	int user_input;
	cout << "\n\nAnswer: ";
	cin >> user_input;

	if (user_input == answer)
	{
		cout << "\nCorrect!\n\n";
	}

	else
	{
		cout << "\nIncorrect.\n\n";
	}

	system("pause");

	}


