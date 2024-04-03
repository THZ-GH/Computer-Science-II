#include <iostream>
#include <iomanip>
#include "GameStock.h"

using namespace std;

GameStock getGameInfo(GameStock &game);
GameStock addGames(GameStock &game);
GameStock removeGames(GameStock &game);
GameStock updateGamePrice(GameStock &game);

char menu();

int main()
{
	// Declare a GameStock object
	GameStock game;

	// Call getGameInfo so the user can enter the information about the game
	getGameInfo(game);

	char choice = 'X'; // you will need to initialize choice to something prior to while
	while (choice != 'Q')
	{
		choice = menu();
		if (choice == 'A')
		{
			// call addGames
			addGames(game);
		}
		else if (choice == 'R')
		{
			// call removeGames
			removeGames(game);
		}
		else if (choice == 'U')
		{
			// call updateGamePrice
			updateGamePrice(game);
		}
		else if (choice != 'Q')
		{
			cout << "Invalid menu choice" << endl;
		}
	}

	// Call the display function
	game.display();

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
	cout << "Q - Quit updating game information" << endl;
	cout << "Enter your menu choice : ";
	cin >> choice;
	choice = toupper(choice);
	return choice;
}

GameStock getGameInfo(GameStock &game)
{
	string n, t;
	double p, v;
	int num;

	cout << "Enter the following information about your game:" << endl;
	cout << "Name: ";
	cin >> n;
	cout << "Type: ";
	cin >> t;
	cout << "Price: ";
	cin >> p;
	cout << "Version: ";
	cin >> v;
	cout << "Number in Stock: ";
	cin >> num;

	game.setName(n);
	game.setType(t);
	game.setPrice(p);
	game.setVersion(v);
	game.setNumber(num);

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

GameStock updateGamePrice(GameStock &game)
{
	double newprice;
	cout << "Please enter the new price of the game." << endl;
	cin >> newprice;

	game.setPrice(newprice);

	return game;
}