#include <iostream>
#include <string>
using namespace std;

bool isLetter(char character) {
    if (((int)character >= 65 && (int)character <= 90) || ((int)character >= 97 && (int)character <= 122)) {
        return true;
    }
    else {
        return false;
    }
}

bool isNumber(char character) {
    if ((int)character >= 48 && (int)character <= 57) {
        return true;
    }
    else {
        return false;
    }
}

string CodelandUsernameValidation(string str) {

    bool bad = false;

    if (str.length() < 25 && str.length() > 4) {
        bad = true;

    }

    if (!isLetter(str[0]))
    {
        bad = true;

    }

    if (str[str.length() - 1] == '_')
    {
        bad = true;

    }

    for (int i = 0; i < str.length(); i++) {
        if (!isNumber(str[i]) && !isLetter(str[i]) && str[i] != '_') {
            bad = true;
            break;
        }
    }



    string answer;

    if (bad)
    {
        answer = "false";
    }

    else
    {
        answer = "true";
    }

    return answer;

}



int main(void) {

    string bobbysMom;
    cin >> bobbysMom;

    cout << CodelandUsernameValidation(bobbysMom);
    return 0;

}