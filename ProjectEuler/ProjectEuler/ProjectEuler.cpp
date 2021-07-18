#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";

    string userInput;
    string encryptedMessage;
    string decryptedMessage;

    int resetInput = 1;
    int key;

    while (resetInput == 1)
    {
        resetInput = 0;

        system("cls");

        cout << "Encrypter\n" << endl;

        cout << "Your secret message: ";
        cin >> userInput;

        cout << "Key: ";
        cin >> key;

        cout << "Encrypted Message: ";

        for (int i = 0; i < userInput.length(); i++)
        {
            cout << (char)((int)userInput[i] + key);
        }

        cout << endl;


        cout << "Type '1' to continue encrypting messages: ";
        cin >> resetInput;

        encryptedMessage = "";
    }

    system("pause");
}

