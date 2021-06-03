// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string age;
	string birthday;
	string hobbie;
	string thingdone;

	cout << "HELLO MAKER\n\n";
	cout << "Your name: ";
	getline(cin, name);
	cout << "Your age: ";
	getline(cin, age);
	cout << "Birth date (m/d/y): ";
	getline(cin, birthday);
	cout << "A hobbie: ";
	getline(cin, hobbie);
	cout << "Something you have done that is exciting: ";
	getline(cin, thingdone);

	cout << "\nHello, my name is " << name << ".";
	cout << "\nI am " << age << " years old and was born on " << birthday << ".";
	cout << " I like " << hobbie << ".";
	cout << "\nI have " << thingdone << " and it was fun!\n\n";

	

	system("pause");


}
