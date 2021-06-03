// growthPercent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

double percent(double first, double second)
{
	double preAnswer;
	int intPreAnswer;
	preAnswer = second / first;
	preAnswer -= 1;
	preAnswer *= 10000;
	intPreAnswer = (int)preAnswer;
	preAnswer = intPreAnswer / 100.0;

	return preAnswer;
}

double difference(double a, double b)
{
	double Answer;
	Answer = b -= a;

	return Answer;
}

int main()
{
	double firstNum;
	double secondNum;
	double answer;
	double differenceAnswer;
	string trash;

	cout << "- PERCENT CALCULATOR -\n\n";
	cout << "Original number: ";
	cin >> firstNum;

	getline(cin, trash);

	cout << "New number: ";
	cin >> secondNum;

    answer = percent(firstNum, secondNum);
	differenceAnswer = difference(firstNum, secondNum);

	cout << "\n- Output -\n\n";
	cout << "Percent gained is: " << answer << "%\n";
	cout << "The difference is: " << differenceAnswer << "\n";

	system("pause");
}
