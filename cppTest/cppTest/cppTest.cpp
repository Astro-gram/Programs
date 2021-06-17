#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	string num = "1\n\n";
	int setNULL;

	cout << num;

	cout << "1 = 1 = null: ";
	cin >> setNULL;

	if (setNULL == 1)
		num = NULL;

	cout << num;
}
