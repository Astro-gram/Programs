// long_mad_libs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "MAD LIBS - John Vs. Bob\n\n";

	string a;
	string b;
	string c;
	string d;
	string e;
	string f;
	string g;
	string h;
	string i;
	string j;
	string k;
	string l;

	cout << "Pick a adjective: ";
	getline(cin, a);
	cout << "Pick a noun: ";
	getline(cin, b);
	cout << "Pick a noun: ";
	getline(cin, c);
	cout << "Pick a number: ";
	getline(cin, d);
	cout << "Pick a adjective: ";
	getline(cin, e);
	cout << "Pick a noun: ";
	getline(cin, f);
	cout << "Pick a number: ";
	getline(cin, g);
	cout << "Pick a number: ";
	getline(cin, h);
	cout << "Pick a number: ";
	getline(cin, i);
	cout << "Pick a person: ";
	getline(cin, j);
	cout << "Pick a noun: ";
	getline(cin, k);
	cout << "Pick a number: ";
	getline(cin, l);
	
	
	cout << "\n\nBob was a mean " << a << " kid with a " << b << " ,John was a weirdo.\n";
	cout << "They were both in middle school.\n";
	cout << "John was sitting in a " << c << ", trying to a pick apple " << d << " feet above the ground.\n";
	cout << "Bob called to John 'Hey boy, my name is Bob, I'm " << e << "!'.\n";
	cout << "John called back 'Me too man, I got " << f << " in my car if you want some!'.\n";
	cout << "Bob said, 'Give that " << f << " to me now!'.\n";
	cout << "John said 'Nooooo, thats my favorite " << f << "!'.\n";
	cout << "John did a " << g << " no-scope on Bob.\n";
	cout << "Bob did a " << h << " on John!\n";
	cout << "they fought for " << i << " minutes till John's " << j << " called him in for " << k << ".\n";
	cout << "John asked Bob if he wanted to join him.\n";
	cout << "Bob, of corse said yes, and they were friends for " << l << " years.\n\n\n";

	system("pause");



}

