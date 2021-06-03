// whatShouldiUse4Dungeons.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string dungeonClass(double a)
{
    const double poor = 1000000;
    const double medium = 100*poor;
    const double rich = 1e9;
    const double superRich = 2*rich;

    if (a >= 0.0 && a <= poor)
    {
        return "Tank";
    }
    else if (a > poor && a <= medium)
    {
        return "Tank";
    }
    else if (a > medium && a <= rich)
    {
        return "Archer";
    }
    else
    {
        return "Mage";
    }
}

int main()
{
    int money;
    string answerClass;
    string realClass;

    cout << "- Dungeons for Skyblock -\n\n";

        cout << "Your money: ";
        cin >> money;

        cout << "You should use " << dungeonClass(money) << " class.\n\n";

    system("pause");

    return 0;
}
