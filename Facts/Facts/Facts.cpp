// Facts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "FACTS\n\n";
	
	int choice;

	cout << "1. Drinks\n2. Food\n3. Games\n4. Dogs";
	cout << "\n\nChoice: ";
	cin >> choice;

	if (choice == 1)
	{
		int choice;
		int more;
		int more2;
		string trash;

		getline(cin, trash);

		cout << "\n1. Coca-Cola\n2. Gadorade\n3. Sprite\n4. Water\n5. Juices";
		cout << "\n\nChoice: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "John S. Pemberton invented Coca-Cola in 1886.\n\n";

			getline(cin, trash);
		
			cout << "Press '1' to read more: ";
				cin >> more;

				if (more == 1)
				{
					cout << "\nCoca-Cola is the most widely distributed product on the planet.\n\n";
					cout << "Press '1' to read more: ";
					cin >> more2;

					if (more2 == 1)
					{
						cout << "\nCoca-Cola has asperame, which can give cancer.\n\n";
					}
				}
		
		}

		if (choice == 2)
		{
			cout << "Gatorade was invented in 1965.\n\n";

			getline(cin, trash);

			cout << "Press '1' to read more: ";
			cin >> more;

			if (more == 1)
			{
				cout << "\nGatorade was originally created for athletes.\n\n";
				cout << "Press '1' to read more: ";
				cin >> more2;

				if (more2 == 1)
				{
					cout << "Every team in the NFL is sponsored by Gatorade.\n\n";
				}
			}

		}

		if (choice == 3)
		{
			cout << "Sprite was developed in West Germany in 1959 as ‘Fanta Klare Zitrone’.\n\n";

			getline(cin, trash);

			cout << "Press '1' to read more: ";
			cin >> more;

			if (more == 1)
			{
				cout << "\nSprite is manufactured by the Coca-Cola Company.\n\n";
				cout << "Press '1' to read more: ";
				cin >> more2;

				if (more2 == 1)
				{
					cout << "Sprite has asperame, which can give cancer similar to Coca-Cola.\n\n";
				}
			}

		}

		if (choice == 4)
		{
			cout << "Water is almost nothing.\n\n";

			getline(cin, trash);

			cout << "Press '1' to read more: ";
			cin >> more;

			if (more == 1)
			{
				cout << "\nYou can never get sick from water as long as it's treated properly.\n\n";
			}

		}

		if (choice == 5)
		{
			cout << "Around the mid-1950s, Juice boxes were created.\n\n";

			getline(cin, trash);

			cout << "Press '1' to read more: ";
			cin >> more;

			if (more == 1)
			{
				cout << "\nThe juice can be consumed faster than a whole fruit, which\ncan cause you to take in a large number of calories over a short period of time.\n\n";
				cout << "Press '1' to read more: ";
				cin >> more2;

				if (more2 == 1)
				{
					cout << "It is high in sugar and low in fiber.\n\n";
				}

			}

		}

	}

	if (choice == 2)
	{
		int healthychoice;
		int unhealthychoice;
		int hunhchoice;
		int more;
		string trash;

		getline(cin, trash);

		cout << "\n1. Healthy\n2. Unhealthy\n\n";
		cout << "Choice: ";
		cin >> hunhchoice;

		if (hunhchoice == 1)
		{
			cout << "\n1. Tomatoes\n2. Carrots\n3. Beans/lentils";
			cout << "\n\nChoice: ";
			cin >> healthychoice;

			if (healthychoice == 1)
			{
				cout << "Tomatos are considered a fruit and a vegetable.\n\n";

				getline(cin, trash);

				cout << "Press '1' to read more: ";
				cin >> more;

				if (more == 1)
				{
					cout << "\nTomatoes are 95% water.\n\n";
				}
			}

			if (healthychoice == 2)
			{
				cout << "Carrots improve eyesight.\n\n";

				getline(cin, trash);

				cout << "Press '1' to read more: ";
				cin >> more;

				if (more == 1)
				{
					cout << "Carrrots are 88% water.\n\n";
				}
			}

			if (healthychoice == 3)
			{
				cout << "Beans and lentils are high in fiber.\n\n";
			}
		}

		if (hunhchoice == 2)
		{
			cout << "\n1. Burgers\n2. Pop Tarts\n3. French Fries\n\n";
			cout << "Choice ";
			cin >> unhealthychoice;

			if (unhealthychoice == 1)
			{
				cout << "A McDonald's Big Mac has 11g's of saturated fat.\n\n";

				cout << "Press '1' to read more: ";
				cin >> more;

				cout << "\nA McDonald's Big Mac also has 1010 mg of sodium.\n\n";


			}

			if (unhealthychoice == 2)
			{
				cout << "A Pop Tart has 38g of carbohydrates.\n\n";

				cout << "Press '1' to read more: ";
				cin >> more;

				cout << "\nA Pop Tart also has 14g of sugar and 200 calories.\n\n";
			}

			if (unhealthychoice == 3)
			{
				cout << "\nFench fries have 18 carbohydrates. \n\n";

				cout << "Press '1' to read more: ";
				cin >> more;

				cout << "\nFrench fries have 13g of fat.\n\n";
			}
		}

	}

	if (choice == 3)
	{
		int gamechoice;
		int more;
		int more2;
		string trash;

		cout << "\n1. Minecraft\n2. Fortnite\n3. Brawl Stars\n\n";
		cout << "Choice: ";
		cin >> gamechoice;

		if (gamechoice == 1)
		{
			cout << "\nMinecraft was created in 2009 and released in 2011.\n\n";

			cout << "Press '1' to read more: ";
			cin >> more;

			cout << "Minecraft was bought for 2.5 billion by Microsoft.\n\n";

			cout << "Press '1' to read more: ";
			cin >> more2;

			cout << "\nMinecraft is the best selling video-game ever.\nIt has sold 200 million copies with 140 million monthy users.\n\n";
		}

		if (gamechoice == 2)
		{
			cout << "Fortnite is dead...\n\n";
		}

		if (gamechoice == 3)
		{
			cout << "Brawl Stars soft launched in June 2017.\n\n";

			cout << "Press '1' to read more: ";
			cin >> more;

			cout << "\nIt was also the fourth game by Supercell to surpass US$1 billion in lifetime revenue.\n\n";
		}



	}

	if (choice == 4)
	{
		int doggochoice;
		cout << "\n1. Astro & Sky\n\n";
		cout << "Choice: ";
		cin >> doggochoice;

		if (doggochoice == 1)
		{
			cout << "\nThey are the best that ever was...\n\n";
		}
	}


	system("pause");
}
