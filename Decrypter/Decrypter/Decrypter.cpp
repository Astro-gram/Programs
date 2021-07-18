#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    
    int resetInput = 1;

    while (resetInput == 1)
    {
        string userMsg;
        int key;
       
        resetInput = 0;

        system("cls");
        cout << "Decrypter\n" << endl;
        cout << "Your encrypted message: ";
        cin >> userMsg;

        cout << "Key: ";
        cin >> key;

        cout << "Decrypted Message: ";
        for (int i = 0; i < userMsg.length(); i++)
        {
            cout << (char)((int)userMsg[i] - key);
        }

        
        cout << endl << "Type '1' to continue decrypting messages: ";
        cin >> resetInput;
    }

    system("pause");
}
