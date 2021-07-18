#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    long double cost;
    long double profit;

    long double profitMargin;
    int profitComparedToCost;

    string approved = "";
    string notApproved = "";

    cout << "Business Results\n" << endl;

    cout << "Manufacturing Cost: ";
    cin >> cost;

    cout << "Sale Price: ";
    cin >> profit;

    profitMargin = profit / cost * 100;
    profitComparedToCost = round(profitMargin / 100);
    if (profitMargin / 100 >= 3)
    { 
        approved = "approved"; 
    }
    else
    { 
        approved = "not approved"; 
        notApproved = "Your product should at least get 300% profit margin.";
    }

    system("cls");

    cout << "=============================================================" << endl;
    cout << "Manufacturing Cost: $" << cost << endl;
    cout << "Sale Price: $" << profit << endl;
    cout << "Profit Margin: " << profitMargin << "%" << endl;
    cout << "You make about " << profitComparedToCost << "x your cost." << endl;
    cout << "This was " << approved << " by common business profit margins." << endl;
    if (notApproved != "") 
    { 
        cout << notApproved << endl;
    }
    cout << "=============================================================\n" << endl;

    system("pause");
}
