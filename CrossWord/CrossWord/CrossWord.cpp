#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void CreateBoard(int size)
{
    for (int z = 0; z < size; z++)
    {
       for (int a = 0; a < size; a++)
       {
           cout << "_ ";
       }

       cout << "\n";
    }
}

int main()
{
    int size;
    string word;
    vector<char> wordChars;

    cout << "Cross Word\n" << endl;

    cout << "Size: ";
    cin >> size;

    cout << "Word: ";
    cin >> word;

    system("cls");

    CreateBoard(size, word);

    cout << "\n\n";
    system("pause");

}
