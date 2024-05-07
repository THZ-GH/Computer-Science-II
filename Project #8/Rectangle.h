#include <iostream>

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
  Rectangle();
  Rectangle(int l, int w);
  void setLength(int l) { length = l; }
  void setWidth(int w) { width = w; }
  int getLength() const { return length; }
  int getWidth() const { return width; }
  double calcArea() const { return length * width; }
  void display() const;

protected:
  int length;
  int width;
};

#endif