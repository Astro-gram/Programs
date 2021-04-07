// test_console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    string d;
    string e;

    cout << "MAD LIBS\n\n";
    cout << "Once Jerry was sitting in a tree...\n\n";
    cout << "Jerry got hit with a: ";
    getline(cin, a);
    cout << "\n Then his friend, Mr. Mom got a chainsaw and: ";
    getline(cin, b);
    cout << "\n Jerry got went to the hospital and: ";
    getline(cin, c);
    cout << "\n His mom came and: ";
    getline(cin, d);
    cout << "\n Then he got infected with: ";
    getline(cin, e);

    cout << "\n\n\n\nThe Legend Goes: \n";
    cout << "Once Jerry was sitting in a tree... \n";
    cout << "Jerry got hit with a " << a << "\n";
    cout << "Then his friend, Mr. Mom got a chainsaw and " << b << "\n";
    cout << "Jerry got went to the hospital and " << c << "\n";
    cout << "His mom came and " << d << "\n";
    cout << "Then he got infected with " << e << "\n" << endl << endl << endl;



    system("pause");

    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
