#include <string>
#include <iomanip>
using namespace std;

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

  string getName();
  string getType();
  double getPrice();
  double getVersion();
  int getNumber();

  int increaseNumGames(int);
  int decreaseNumGames(int);

  void display();
};