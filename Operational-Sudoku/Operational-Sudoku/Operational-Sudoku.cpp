#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


//Random number (1-9) -> (rand() % 9) + 1
void printBoard(int board[9][9]);
void printBoardClean(int board[9][9]);
void fillBoard(int board[9][9], int form[9][9][2], int values[9]);
void createBlanks(int pool[9][9]);


int main()
{
	//FORM 1:
	int cords[9][9][2];

	cords[0][0][0] = 0; cords[0][0][1] = 0;
	cords[0][1][0] = 2; cords[0][1][1] = 4;
	cords[0][2][0] = 1; cords[0][2][1] = 8;
	cords[0][3][0] = 5; cords[0][3][1] = 2;
	cords[0][4][0] = 3; cords[0][4][1] = 5;
	cords[0][5][0] = 4; cords[0][5][1] = 7;
	cords[0][6][0] = 6; cords[0][6][1] = 1;
	cords[0][7][0] = 8; cords[0][7][1] = 3;
	cords[0][8][0] = 7; cords[0][8][1] = 6;

	cords[1][0][0] = 0; cords[1][0][1] = 1;
	cords[1][1][0] = 1; cords[1][1][1] = 4;
	cords[1][2][0] = 2; cords[1][2][1] = 8;
	cords[1][3][0] = 4; cords[1][3][1] = 2;
	cords[1][4][0] = 5; cords[1][4][1] = 5;
	cords[1][5][0] = 3; cords[1][5][1] = 6;
	cords[1][6][0] = 8; cords[1][6][1] = 0;
	cords[1][7][0] = 6; cords[1][7][1] = 3;
	cords[1][8][0] = 7; cords[1][8][1] = 7;

	cords[2][0][0] = 0; cords[2][0][1] = 2;
	cords[2][1][0] = 1; cords[2][1][1] = 5;
	cords[2][2][0] = 2; cords[2][2][1] = 6;
	cords[2][3][0] = 4; cords[2][3][1] = 1;
	cords[2][4][0] = 5; cords[2][4][1] = 4;
	cords[2][5][0] = 3; cords[2][5][1] = 7;
	cords[2][6][0] = 6; cords[2][6][1] = 0;
	cords[2][7][0] = 7; cords[2][7][1] = 3;
	cords[2][8][0] = 8; cords[2][8][1] = 8;

	cords[3][0][0] = 1; cords[3][0][1] = 0;
	cords[3][1][0] = 2; cords[3][1][1] = 5;
	cords[3][2][0] = 0; cords[3][2][1] = 7;
	cords[3][3][0] = 3; cords[3][3][1] = 1;
	cords[3][4][0] = 5; cords[3][4][1] = 3;
	cords[3][5][0] = 4; cords[3][5][1] = 8;
	cords[3][6][0] = 8; cords[3][6][1] = 2;
	cords[3][7][0] = 7; cords[3][7][1] = 4;
	cords[3][8][0] = 6; cords[3][8][1] = 6;

	cords[4][0][0] = 1; cords[4][0][1] = 1;
	cords[4][1][0] = 2; cords[4][1][1] = 3;
	cords[4][2][0] = 0; cords[4][2][1] = 8;
	cords[4][3][0] = 5; cords[4][3][1] = 0;
	cords[4][4][0] = 3; cords[4][4][1] = 4;
	cords[4][5][0] = 4; cords[4][5][1] = 6;
	cords[4][6][0] = 6; cords[4][6][1] = 2;
	cords[4][7][0] = 7; cords[4][7][1] = 5;
	cords[4][8][0] = 8; cords[4][8][1] = 7;

	cords[5][0][0] = 1; cords[5][0][1] = 2;
	cords[5][1][0] = 0; cords[5][1][1] = 4;
	cords[5][2][0] = 2; cords[5][2][1] = 7;
	cords[5][3][0] = 3; cords[5][3][1] = 0;
	cords[5][4][0] = 4; cords[5][4][1] = 3;
	cords[5][5][0] = 5; cords[5][5][1] = 8;
	cords[5][6][0] = 7; cords[5][6][1] = 1;
	cords[5][7][0] = 6; cords[5][7][1] = 5;
	cords[5][8][0] = 8; cords[5][8][1] = 6;

	cords[6][0][0] = 2; cords[6][0][1] = 0;
	cords[6][1][0] = 1; cords[6][1][1] = 3;
	cords[6][2][0] = 0; cords[6][2][1] = 6;
	cords[6][3][0] = 3; cords[6][3][1] = 2;
	cords[6][4][0] = 4; cords[6][4][1] = 5;
	cords[6][5][0] = 5; cords[6][5][1] = 7;
	cords[6][6][0] = 8; cords[6][6][1] = 1;
	cords[6][7][0] = 6; cords[6][7][1] = 4;
	cords[6][8][0] = 7; cords[6][8][1] = 8;

	cords[7][0][0] = 2; cords[7][0][1] = 1;
	cords[7][1][0] = 0; cords[7][1][1] = 5;
	cords[7][2][0] = 1; cords[7][2][1] = 7;
	cords[7][3][0] = 4; cords[7][3][1] = 0;
	cords[7][4][0] = 3; cords[7][4][1] = 3;
	cords[7][5][0] = 5; cords[7][5][1] = 6;
	cords[7][6][0] = 7; cords[7][6][1] = 2;
	cords[7][7][0] = 8; cords[7][7][1] = 4;
	cords[7][8][0] = 6; cords[7][8][1] = 8;

	cords[8][0][0] = 2; cords[8][0][1] = 2;
	cords[8][1][0] = 0; cords[8][1][1] = 3;
	cords[8][2][0] = 1; cords[8][2][1] = 6;
	cords[8][3][0] = 5; cords[8][3][1] = 1;
	cords[8][4][0] = 4; cords[8][4][1] = 4;
	cords[8][5][0] = 3; cords[8][5][1] = 8;
	cords[8][6][0] = 7; cords[8][6][1] = 0;
	cords[8][7][0] = 8; cords[8][7][1] = 5;
	cords[8][8][0] = 6; cords[8][8][1] = 7;


	//CODE STARTS HERE
	srand(time(0));

	cout << " -- SUDUKO GAME v1 --\n\n\n";

	//Sets all items to 0
	int board[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			board[i][j] = 0;
		}
	}

	int values[9];
	vector<int> valPool = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 9; i++)
	{
		int randNum = (rand() % valPool.size());
		values[i] = valPool[randNum];

		valPool.erase(valPool.begin() + randNum);
	}

	fillBoard(board, cords, values);
	printBoard(board);

	cout << endl;
	system("pause");
}


//FUNCTIONS:

void fillBoard(int board[9][9], int form[9][9][2], int values[9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int x = form[i][j][0];
			int y = form[i][j][1];

			board[x][y] = values[i];

		}
	}
}

void printBoard(int board[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << " " << board[i][j];
			if (j == 2 || j == 5)
			{
				cout << " |";
			}
		}
		if (i == 2 || i == 5)
			cout << "\n ---------------------";
		cout << "\n";
	}
}

void createBlanks()
{
	rand() % 9;
	
	int orginalBoard;

	orginalBoard = board
}

void printBoardClean(int board[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

}












/*

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int z = 0; z < 3; z++)
			{
				cout << " " << (rand() % 9) + 1;
			}

			if (j != 2)
				cout << " |";
		}
		if (i == 2 || i == 5)
			cout << "\n ---------------------";
		cout << "\n";
	}



	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n";
	cout << "---------------------\n";
	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n";
	cout << "---------------------\n";
	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n";
	cout << "* * * | * * * | * * *\n\n";

		for (int i = 0; i < 9; i++)
		{
			cout << "* * * | * * * | * * *\n";
			cout << "-----------------------\n";
		}


	for (int miniBoxRow = 0; miniBoxRow < 3; miniBoxRow++)
	{
		for (int miniBoxCol = 0; miniBoxCol < 3; miniBoxCol++)
		{
			for (int indBoxRow = 0; indBoxRow < 3; indBoxRow++)
			{
				for (int indBoxCol = 0; indBoxCol < 3; indBoxCol++)
				{

					printBoardClean(board);
					cout << "\n\n\n\n";
					bool unqNum = false;
					int randNum;
					int x = miniBoxRow * 3 + indBoxRow;
					int y = miniBoxCol * 3 + indBoxCol;

					while (!unqNum)
					{
						randNum = (rand() % 9) + 1;

						if (randNum == board[x][0] || randNum == board[x][1] || randNum == board[x][2] || randNum == board[x][3] || randNum == board[x][4] || randNum == board[x][5] || randNum == board[x][6] || randNum == board[x][7] || randNum == board[x][8])
							continue;

						if (randNum == board[0][y] || randNum == board[1][y] || randNum == board[2][y] || randNum == board[3][y] || randNum == board[4][y] || randNum == board[5][y] || randNum == board[6][y] || randNum == board[7][y] || randNum == board[8][y])
							continue;

						if (randNum == board[miniBoxRow * 3][miniBoxCol * 3] || randNum == board[miniBoxRow * 3][miniBoxCol * 3 + 1] || randNum == board[miniBoxRow * 3][miniBoxCol * 3 + 2] || randNum == board[miniBoxRow * 3 + 1][miniBoxCol * 3] || randNum == board[miniBoxRow * 3 + 1][miniBoxCol * 3 + 1] || randNum == board[miniBoxRow * 3 + 1][miniBoxCol * 3 + 2] || randNum == board[miniBoxRow * 3 + 2][miniBoxCol * 3] || randNum == board[miniBoxRow * 3 + 2][miniBoxCol * 3 + 1] || randNum == board[miniBoxRow * 3 + 2][miniBoxCol * 3 + 2])
							continue;
						unqNum = true;
						cout << "test" << endl;

					}

					board[x][y] = randNum;
				}
			}

		}


		int genNum(int board[9][9], int x, int y)
{
	if (x > 8 || x < 0 || y > 8 || y < 0)
	{
		return -1;
	}

	bool unqNum = false;
	int miniBoxX = x / 3;
	int miniBoxY = y / 3;
	int randNum;

	while (!unqNum)
	{
		randNum = (rand() % 9) + 1;

		if (randNum == board[x][0] || randNum == board[x][1] || randNum == board[x][2] || randNum == board[x][3] || randNum == board[x][4] || randNum == board[x][5] || randNum == board[x][6] || randNum == board[x][7] || randNum == board[x][8])
			continue;

		if (randNum == board[0][y] || randNum == board[1][y] || randNum == board[2][y] || randNum == board[3][y] || randNum == board[4][y] || randNum == board[5][y] || randNum == board[6][y] || randNum == board[7][y] || randNum == board[8][y])
			continue;

		if (randNum == board[miniBoxX * 3][miniBoxY * 3] || randNum == board[miniBoxX * 3][miniBoxY * 3 + 1] || randNum == board[miniBoxX * 3][miniBoxY * 3 + 2] || randNum == board[miniBoxX * 3 + 1][miniBoxY * 3] || randNum == board[miniBoxX * 3 + 1][miniBoxY * 3 + 1] || randNum == board[miniBoxX * 3 + 1][miniBoxY * 3 + 2] || randNum == board[miniBoxX * 3 + 2][miniBoxY * 3] || randNum == board[miniBoxX * 3 + 2][miniBoxY * 3 + 1] || randNum == board[miniBoxX * 3 + 2][miniBoxY * 3 + 2])
			continue;

		unqNum = true;
	}
	return randNum;

}
	}*/