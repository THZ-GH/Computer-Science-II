// Evan Walpole
// This program uses three files to show the stock and other information of a game. 
#include "GameStock.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  // Testing default construction
  GameStock game1;
  GameStock game2("Monopoly", "Board Game", 19.99, 1.0, 25);

  // Testing set functions
  game1.setName("Clue");
  game1.setType("Board Game");
  game1.setPrice(19.99);
  game1.setVersion(1.0);
  game1.setNumber(20);

  // Testing get functions
  cout << game1.getName() << endl;
  cout << game1.getType() << endl;
  cout << game1.getPrice() << endl;
  cout << game1.getVersion() << endl;
  cout << game1.getNumber() << endl;

  game2.display();

  // Testing increase and decrease functions
  game1.increaseNumGames(5);
  game2.decreaseNumGames(5);

  // Display
  cout << "Games currently in stock: " << endl << endl;
  game1.display();
  game2.display();
  
  return 0;
}