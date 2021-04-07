// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "CALCULATOR\n\n";

		int num1;
		int num2;
		cout << "First Number: ";
		cin >> num1;
		cout << "Second Number: ";
		cin >> num2;

		int choice;

		cout << "\n1. Plus\n2. Minus\n3. Multiply\n4. Divide";
		cout << "\n\nPick An Operation: ";
		cin >> choice;


		int result;


		if (choice == 1)
		{
			result = num1 + num2;
		}

		else if (choice == 2)
		{
			result = num1 - num2;
		}

		else if (choice == 3)
		{
			result = num1 * num2;
		}

		else if (choice == 4)
		{
			result = num1 / num2;
		}

	system("pause");
	return 0;
}
