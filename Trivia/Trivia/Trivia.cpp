// Trivia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void askTrivia(string questions[4], string answers[4]);
string lowercase(string str);

int main()
{
	cout << "--TRIVIA--";

	int choice;

	cout << "\n\n1. General Trivia\n";
	cout << "2. Sports Trivia\n";
	cout << "3. Shows Trivia\n";
	cout << "4. Animal Trivia\n";
	cout << "\nWARNING: All words start with a upper case!\n";
	cout << "\nPick a Trivia: "; 

	cin >> choice;
	cin.get();

	int score = 0;

	if (choice == 1)
	{
		string genQuestions[4] = {
		"What is the rarest M&M color?  \nOption A: Black   Option B: Brown   Option C: Purple",
		"In a website browser address bar, what does 'www' stand for?  \nOption A: Internet Option   B: Website Option   C: World Wide Web",
		"In what year were the first Air Jordan sneakers released?  \nOption A: 1984   Option B: 1996   Option C: 1982",
		"In a bingo game, which number is represented by the phrase 'two little ducks'?  \nOption A: 22   Option B: 4   Option C: 5"
		};

		string genAnswers[4] = {
			"Brown",
			"World Wide Web",
			"1984",
			"22"
		};

		askTrivia(genQuestions, genAnswers);
	}

	else if (choice == 2) 
	{
		string sportsQuestions[4] = {
		"In professional basketball, how high is the basketball hoop from the ground (in feet)? \nOption A: 10   Option B: 12   Option C: 8",
		"The Olympics are held every how many years?  \nOption A: 2   Option B: 4   Option C: 1",
		"What do you call it when a player makes three back to back strikes in bowling?  \nOption A: Pig   Option B: Horse   Option C: Turkey",
		"How many players are on a baseball team?  \nOption A: 9   Option B: 11   Option C: 12"
		};

		string sportsAnswers[4] = {
			"10",
			"4",
			"Turkey",
			"9"
		};

		askTrivia(sportsQuestions, sportsAnswers);
	}

	else if (choice == 3)
	{
		string showQuestions[4] = {
		"What is the name of the toy cowboy in Toy Story?  \nOption A: Woodie   Option B: Woody   Option C: Cowboy",
		"Which Studio produced Avergers?  \nOption A: Marvel   Option B: Marvel Studios   Option C:DC Studios",
		"What was the highest-grossing film?  \nOption A: Avatar   Option B: Avenger's Endgame   Option C: Toy Story 4",
		"What is the fish's name from Amazing World of Gumball?  \nOption A: Gumball Option B: Richard Option C: Darwin"
		};

		string showAnswers[4] = {
			"Woody",
			"Marvel",
			"Avatar",
			"Darwin"
		};

		askTrivia(showQuestions, showAnswers);
	}

	else if (choice == 4)
	{
		string animalQuestions[4] = {
		"How Long Does A Sloth Digest Its Food?  \nOption A: 2 weeks   Option B: 3 days   Option C: 6 months",
		"Which Has The Thickest Fur Of Any Mammal?  \nOption A: Sea otters   Option B: Tiger   Option   C: Frog",
		"Which Mammal Has The Most Powerful Bite In The World?  \nOption A: Lion   Optiton B:Hippo   Option C:Python Snake",
		"What Counts For 99 Percent Of A Panda’s Diet?  \nOption A: Bamboo Option   B: Grass Option   C: Trees"
		};

		string animalAnswers[4] = {
			"2 Weeks",
			"Sea Otters",
			"Hippo",
			"Bamboo"
		};

		askTrivia(animalQuestions, animalAnswers);
	}

	else
	{
	cout << "Choice not recognized\n\n";
	}

	system("pause");
}

string lowercase(string str)
{
	string lowerString;

	for (int i = 0; i < str.length(); i++)
	{
		lowerString += tolower(str[i]);
	}

	return lowerString;
}



void askTrivia(string questions[4], string answers[4])
{
	int score = 0;
	int rightOrWrong[4];
	int numQuestions = 4;
	for (int i = 0; i < numQuestions; i++) {
		string userAnswer;
		cout << "\n" << questions[i];
		cout << "\nWhat is the answer: ";
		getline(cin, userAnswer);

		if (lowercase(userAnswer) == lowercase(answers[i]))
		{
			++score;
			rightOrWrong[i] = 1;
		}
		else
		{
			rightOrWrong[i] = 0;
		}
	}

	cout << "\n\nYour score is " << score << " out of " << numQuestions << "\n";
	for (int i = 0; i < numQuestions; i++)
	{
		if (rightOrWrong[i] == 0)
		{
			cout << "You got question " << i + 1 << " wrong\n";
		}
	}

	cout << "\n\n";
}





