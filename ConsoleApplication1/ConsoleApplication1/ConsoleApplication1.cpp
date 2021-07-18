#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

static string Calc(double views, bool percise)
{
    double minMoney;
    double maxMoney;
    double estimation;
    string answer = "";

    estimation = (views / 1000) * 2;
    minMoney = (views / 1000) / 4;
    maxMoney = estimation * 2;

    if (percise)
    {
        answer = ("Range: $" + to_string(minMoney) + " - $" + to_string(maxMoney) + "\n\n" + "Estimation: $" + to_string(estimation));
    }

    else if (!percise)
    {
        answer = ("Range: $" + to_string((long long int)minMoney) + " - $" + to_string((long long int)maxMoney) + "\n\n" + "Estimation: $" + to_string((long long int)estimation));
    }

    return answer;
}

int main()
{
    long long views;
    bool loopViews = true;
    int loopViewsInput;

    bool percise;
    int perciseInput;


    bool loopPercise = false;
    
    while (!loopPercise)
    {
        system("cls");
        cout << "Youtube Money Calculator\n" << endl;

        cout << "'1' For Percise Calculation" << endl;
        cout << "'2' For Rounded Calculation\n" << endl;

        cout << "Choice: ";
        cin >> perciseInput;

        if (perciseInput == 1)
        {
            percise = true;
            loopPercise = true;
        }
        else if (perciseInput == 2)
        {
            percise = false;
            loopPercise = true;
        }
    }

    while (loopViews)
    {
        system("cls");

        cout << "Views: ";
        cin >> views;

        cout << "\n" << Calc(views, percise) << "\n" << endl;

        cout << "Press '1' to reset: ";
        cin >> loopViewsInput;

        if (loopViewsInput == 1)
        {
            loopViews = true;
        }
        
        else
        {
            loopViews = false;
        }
    }

    system("pause");
}