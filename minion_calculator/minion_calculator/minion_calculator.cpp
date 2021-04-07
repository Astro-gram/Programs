
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int itemsPerAction;
    float actionTime;
    float unitPrice;
    float earnings;
    int numberOfMinions;
    printf("Action Time: ");
    scanf("%f", &actionTime);
    printf("Unit Price: ");
    scanf("%f", &unitPrice);
    printf("Items Per Action: ");
    scanf("%d", &itemsPerAction);
    printf("Number of Minions: ");
    scanf("%d", &numberOfMinions);


    earnings = 86400 / actionTime * itemsPerAction * unitPrice + 138240 / actionTime;
    printf("\nEarnings: %f\n", earnings);
    printf("Total Earnings From All Minions: %f\n\n", earnings * numberOfMinions);

    //printf("\n\nPress any key to continue...");
    //getchar();
    //getchar();

    system("pause");

    return 0;
}
