#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int Update(string answer, vector<char>& userWord, char guess, int &lives)
{
	bool letterFound = false;
	int numCorrectLetters = 0;
	for (int i = 0; i < answer.length(); i++) {
		if (answer[i] == guess) {
			userWord[i] = guess;
			letterFound = true;
		}

		if (userWord[i] != '_') {
			numCorrectLetters++;
		}
	}

	if (!letterFound) {
		lives--;
	}

	return numCorrectLetters;
}

void Print(vector<char> userWord) 
{
	for (int i = 0; i < userWord.size(); i++) {
		cout << userWord[i] << "  ";
	}

	cout << endl;
}

int main()
{
	string answer;
	string incorrect;
	char guess;
	int lives = 5;

	cout << "Hang Man\n" << endl;

	cout << "Word: ";
	cin >> answer;

	vector<char> userWord(answer.length(), '_');


	while (lives > 0) 
	{
		system("cls");
		cout << "Lives: " << lives << "\n" << endl;

		cout << "Wrong: " << incorrect << "\n\n" << endl;

		Print(userWord);


		cout << "\nGuess: ";
		cin >> guess;

		int correctLetters = Update(answer, userWord, guess, lives);
		if (correctLetters == answer.length()) {
			system("cls");
			Print(userWord);
			cout << "\n\nYOU WIN!\n\n" << endl;
			break;
		}

		if (correctLetters == 0)
		{
			incorrect += guess;
		}
	}


	system("pause");
}