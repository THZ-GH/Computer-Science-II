#include <string>
#include <iomanip>
using namespace std;

#ifndef GAMESTOCK_H
#define GAMESTOCK_H
// Class definition
class GameStock {
private:
  string name;
  string type;
  double price;
  double version;
  int numberOfGames;

public:
  GameStock();
  GameStock(string, string, double, double, int);
  void setName(string);
  void setType(string);
  void setPrice(double);
  void setVersion(double);
  void setNumber(int);

  string getName() const;
  string getType() const;
  double getPrice() const;
  double getVersion() const;
  int getNumber() const;

  void increaseNumGames(int);
  void decreaseNumGames(int);

  void display() const;
};
#endif