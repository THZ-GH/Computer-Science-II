#include "Prism.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  Rectangle r1;

  Rectangle r2(2, 11);

  r1.setWidth(5);
  r1.setLength(7);

  cout << "Rectangle 1" << endl;
  cout << setw(9) << left << "Length: " << r1.getLength() << endl
       << setw(9) << left << "Width: " << r1.getWidth() << endl;

  cout << setw(9) << left << "Area: " << r1.calcArea() << endl;

  cout << endl << "Rectangle 2" << endl;
  r2.display();

  cout << setw(9) << left << "Area: " << r2.calcArea() << endl;

  Prism p1;

  p1.setLength(2);
  p1.setWidth(4);
  p1.setHeight(6);

  cout << endl << "Prism 1" << endl;
  p1.display();

  cout << setw(9) << left << "Volume: " << p1.volume() << endl;

  Prism p2(8, 10, 12);

  cout << endl << "Prism 2" << endl;
  p2.display();

  cout << setw(9) << left << "Volume: " << p2.volume() << endl;

  return 0;
}