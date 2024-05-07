#include "Rectangle.h"
#include <iostream>

#ifndef PRISM_H
#define PRISM_H

using namespace std;

class Prism : public Rectangle {
private:
  int height;

public:
  Prism();
  Prism(int l, int w, int h);
  void setHeight(int h);
  int getHeight() const;
  int volume();
  void display() const;
};

#endif