// loveCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>


using namespace std;

int main()
{
    string name1;
    string name2;

    int dating;
    int marriage;

    cout << "Love Calculator\n" << endl;

    cout << "First Lover: ";
    cin >> name1;
    cout << "\nSecond Lover: ";
    cin >> name2;

    cout << "\nCalculating.\n";
    Sleep(1000);
    cout << "Calculating..\n";
    Sleep(1000);
    cout << "Calculating...\n";
    Sleep(1000);

    srand(time(0));
    dating = rand() % 100;
    marriage = dating / 1.5;

    cout << "\nChange of Dating: " << dating << "%";
    cout << "\nChange of Marriage: " << marriage << "%" << endl;

    cout << "\n";

    if (dating >= 50)
    {
        cout << name1 << " will most likely date " << name2 << endl;
    }
    else
    {
        cout << name1 << " will most likely not date " << name2 << endl;
    }

    if (marriage >= 50)
    {
        cout << name1 << " will mostly likey marry " << name2 << endl;
    }
    else
    {
        cout << name1 << " will most likely not marry " << name2 << endl;
    }

    cout << "\n\n";
    system("pause");
}
