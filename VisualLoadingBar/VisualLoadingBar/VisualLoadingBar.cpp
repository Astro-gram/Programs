// VisualLoadingBar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
    int procentage = 0;

    cout << "Loading Bar\n" << endl;
    Sleep(1000);

    cout << procentage << "% Done";

    for (int i = 0; i < 100; i++)
    {
        cout << "=";
    }

    cout << "\n";

    for (int i = 0; i < 100; i++)
    {
        Sleep(100);

        for (int j = 0; j < i; j++)
        {
            cout << "1";
        }

        system("cls");
    }
    
}
