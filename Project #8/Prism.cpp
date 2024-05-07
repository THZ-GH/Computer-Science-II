#include "Prism.h"
#include <iostream>
#include <iomanip>

using namespace std;

Prism::Prism() {
  length = 0;
  width = 0;
  height = 0;
}

Prism::Prism(int l, int w, int h) {
  length = l;
  width = w;
  height = h;
}

void Prism::setHeight(int h) { height = h; }

int Prism::getHeight() const { return height; }

int Prism::volume() { return length * width * height; }

void Prism::display() const {
  Rectangle::display();
  cout << setw(9) << left << "Height: " << height << endl;
}