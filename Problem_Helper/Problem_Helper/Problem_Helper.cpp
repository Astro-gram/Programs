// Problem_Helper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
		int a;
		int num1;
		int num2;

		cout << "PROBLEM HELPER\n\n";
		cout << "Pick a number representing the operation:\n\n1. Adding\n2. Subtracting\n3. Multiply\n4. Divide";
		cout << "\n\nYour picking: ";

		cin >> a;



		if (a == 1)
		{
			cout << "What is the first number: ";
			cin >> num1;
			cout << "What is the second number: ";
			cin >> num2;

			cout << "\nJohn has " << num1 << " screwdrivers. His friend Bobby, gives him " << num2 << " more.\nHow many does he have now?\n\n";
		}

		if (a == 2)
		{
			cout << "What is the first number: ";
			cin >> num1;
			cout << "What is the second number: ";
			cin >> num2;
			cout << "\nJohn has " << num1 << " screwdrivers. His friend Bobby, askes to use " << num2 << " of them.\nHow many does John have now?\n\n";
		}

		if (a == 3)
		{
			cout << "What is the first number: ";
			cin >> num1;
			cout << "What is the second number: ";
			cin >> num2;

			cout << "\nJohn has " << num1 << " piles of " << num2 << " screwdrives.\nHow many will he half after he counts them all?\n\n";
		}

		if (a == 4)
		{
			cout << "What is the first number: ";
			cin >> num1;
			cout << "What is the second number: ";
			cin >> num2;

			cout << "\nJohn has " << num1 << " screwdrivers. He puts it into " << num2 << " groups evenly.\nHow many screwdrives are there in each group?\n\n";
		}


	system ("pause");
}
