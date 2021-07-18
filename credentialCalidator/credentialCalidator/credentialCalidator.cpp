#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;

bool NameCheck(string name)
{
    string allowedName;
    bool badName = false;

    for (int i = 0; i < name.length(); i++)
    {
        if ((int)name[i] >= 64 && (int)name[i] <= 90 || (int)name[i] >= 97 && (int)name[i] <= 122)
        {
            allowedName += name[i];
        }
        else
        {
            badName = true;
            break;
        }
    }

    return badName;
}

bool PhoneNumberCheck(string phoneNumber)
{
    string allowedNumber;
    bool badNumber = false;

    for (int i = 0; i < phoneNumber.length(); i++)
    {
        if ((int)phoneNumber[i] >= 40 && (int)phoneNumber[i] <= 41 || (int)phoneNumber[i] >= 48 && (int)phoneNumber[i] <= 57 || (int)phoneNumber[i] == 45)
        {
            allowedNumber += phoneNumber[i];
        }
        else
        {
            badNumber = true;
            break;
        }
    }

    return badNumber;
}

bool EmailCheck(string email)
{
    string allowedEmail;
    bool badEmail = false;

    for (int i = 0; i < email.length(); i++)
    {
        if ((int)email[i] >= 97 && (int)email[i] <= 122 || (int)email[i] >= 48 && (int)email[i] <= 57 || (int)email[i] == 46 || (int)email[i] == 40)
        {
            allowedEmail += email[i];
        }
        else
        {
            badEmail = true;
            break;
        }
    }

    return badEmail;
}

int main()
{
    string firstName;
    string lastName;
    string phoneNumber;
    string email;
    int age;

    bool notAllowed = false;
    bool stop = false;

    cout << "Register User\n" << endl;

    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Phone Number: ";
    cin >> phoneNumber;
    cout << "Email: ";
    cin >> email;
    cout << "Age: ";
    cin >> age;

    if (NameCheck(firstName))
    {
        notAllowed = true;
    }
    else if (NameCheck(lastName))
    {
        notAllowed = true;
    }

    else if (PhoneNumberCheck(phoneNumber))
    {
        notAllowed = true;
    }


    if (notAllowed)
    {
        system("cls");
        cout << "Your inputs don't make sence you dummy.\n\n\n\n";
    }

    else
    {
        system("cls");
        cout << "=======================================================" << endl;
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        cout << "Age: " << age << endl;
        cout << "=======================================================\n\n" << endl;
    }

    system("pause");
}