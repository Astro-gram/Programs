// Joke_Maker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "-- JOKE MAKER --\n";
    
    int Choice;

    cout << "Pick a joke type (ex - 1 or 2):\n\n";
    cout << "1. Yo Mama\n2. Knock Knock\n";
    cout << "Number: ";
    cin >> Choice;

    if (Choice == 1)
    {
        int MamaChoice;
        cout << "\nPick a Yo Mama joke type:\n1. So ugly\n2. So fat\n3. So Stupid\n4. Your Own";
        cout << "\n\nNumber: ";
        cin >> MamaChoice;

        string trash;
        getline(cin, trash);

        if (MamaChoice == 1)
        {
            string person;
            string verb;

            cout << "Pick a person/character: ";
            getline(cin, person);
            cout << "Pick a verb: ";
            getline(cin, verb);

            cout << "\nYour Mama so ugly, " << person << " " << verb << " for their life!\n\n\n";
            
        }

        if (MamaChoice == 2)
        {
            string person;
            string verb;
            string verbTwo;
            
            cout << "Pick a person/character: ";
            getline(cin, person);
            cout << "Pick a verb: ";
            getline(cin, verb);
            cout << "Pick another verb: ";
            getline(cin, verbTwo);

            cout << "\nYour Mama so fat, " << person << " " << verb << " and " << verbTwo << " for their life!\n\n\n";
        }

        if (MamaChoice == 3)
        {
            string person;
            string verb;

            cout << "Pick a human name: ";
            getline(cin, person);
            cout << "Pick a verb: ";
            getline(cin, verb);

            cout << "\nYour Mama so fat, " << person << " " << verb << " and died!\n\n\n";
        }

        if (MamaChoice == 4)
        {
            string type;
            string person;
            string verb;
            string verbTwo;

            cout << "\n\nPick a adjective: ";
            getline(cin, type);
            cout << "Pick a human name: ";
            getline(cin, person);
            cout << "Pick a verb: ";
            getline(cin, verb);

            cout << "\nYour Mama so " << type << " " << person << " " << verb << "\n\n\n";
        }
       
    }

    if (Choice == 2)
    {
        string firstKnock;
        string secondKnock;
        string trash;

        getline(cin, trash);

        cout << "Pick the first knock message: ";
        getline(cin, firstKnock);
        cout << "Pick the second knock message: ";
        getline(cin, secondKnock);

        cout << "Knock Knock, Whos there? " << firstKnock << ". " << firstKnock << " who? " << secondKnock << "!\n\n\n";


    }

    system("pause");
}

