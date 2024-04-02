#include "GameStock.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Default constructor
GameStock::GameStock() {
  name = "";
  price = 0.0;
  version = 0.0;
  numberOfGames = 0;
}

// Constructor with parameters
GameStock::GameStock(string n, string t, double p, double v, int number){
  name = n;
  type = t;
  price = p;
  version = v;
  numberOfGames = number;
}

// Set functions
void GameStock::setName(string n) { name = n; }

void GameStock::setType(string t) { type = t; }

void GameStock::setPrice(double p) { price = p; }

void GameStock::setVersion(double v) { version = v; }

void GameStock::setNumber(int number) { numberOfGames = number; }

// Get functions
string GameStock::getName() { return name; }

string GameStock::getType() { return type; }

double GameStock::getPrice() { return price; }

double GameStock::getVersion() { return version; }

int GameStock::getNumber() { return numberOfGames; }

// Increase and decrease functions
int GameStock::increaseNumGames(int number) {
  numberOfGames += number;
  return numberOfGames;
}

int GameStock::decreaseNumGames(int number) {
  numberOfGames -= number;
  return numberOfGames;
}

// Display
void GameStock::display() {
  cout << fixed << setprecision(2);
  cout << "Game Info for: " << setw(10) << name << endl;
  cout << "Type: " << setw(10) << type << endl;
  cout << "Price: " << setw(10) << "$ "<< price << endl;
  cout << "Version: " << setw(10) << version << endl;
  cout << "Current # In Stock: " << setw(10) << numberOfGames << endl << endl;
}