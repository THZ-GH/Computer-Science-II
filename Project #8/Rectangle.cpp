#include "Rectangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle() {
  length = 0;
  width = 0;
}

Rectangle::Rectangle(int l, int w) {
  length = l;
  width = w;
}

void Rectangle::display() const {
  cout << setw(9) << left << "Length: " << length << endl;
  cout << setw(9) << left << "Width: " << width << endl;
}