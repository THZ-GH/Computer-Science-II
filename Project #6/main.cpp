#include <iostream>
#include <iomanip>
#include "GameStock.h"

using namespace std;

GameStock getGameInfo();
GameStock addGames();
GameStock removeGames();
GameStock updateGamePrice();

char menu();

int main()
{
	// Declare a GameStock object
	GameStock game;

	// Call getGameInfo so the user can enter the information about the game
	getGameInfo();

	char choice = 'X'; // you will need to initialize choice to something prior to while
	while (choice != 'Q')
	{
		choice = menu();
		if (choice == 'A')
		{
			// call addGames
			addGames();
		}
		else if (choice == 'R')
		{
			// call removeGames
			removeGames();
		}
		else if (choice == 'U')
		{
			// call updateGamePrice
			updateGamePrice();
		}
		else if (choice != 'Q')
		{
			cout << "Invalid menu choice" << endl;
		}
	}

	// Call the display function

	return 0;
}

char menu()
{
	char choice;
	cout << endl
		 << "Menu choices : " << endl;
	cout << "A - Add to Stock" << endl;
	cout << "R - Remove from Stock" << endl;
	cout << "U - Update price" << endl;
	cout << "Q - Quit updaInboxting game information" << endl;
	cout << "Enter your menu choice : ";
	cin >> choice;
	choice = toupper(choice);
	return choice;
}

GameStock getGameInfo(string name, string type, double price, double version, int numberOfGames)
{

	cout << "Enter the following information about your game:" << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Type: ";
	cin >> type;
	cout << "Price: ";
	cin >> price;
	cout << "Version: ";
	cin >> version;
	cout << "Number in Stock: ";
	cin >> numberOfGames;

	GameStock game(name, type, price, version, numberOfGames);

	return game;
}

GameStock addGames(GameStock &game)
{
	int adder;
	cout << "Enter the number of games you wish to add." << endl;
	cin >> adder;

	game.increaseNumGames(adder);
	
	return game;
}

GameStock removeGames(GameStock &game)
{
	int remover;
	cout << "Enter the number of games you wish to remove." << endl;
	cin >> remover;

	game.decreaseNumGames(remover);

	return game;
}