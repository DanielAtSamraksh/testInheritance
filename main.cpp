
#include <sstream>
#include <iostream>
#include "base.h"
#include "derived.h"

using std::cout;

int main ( int argc, char *argv[]) {
  Derived d;
  d.x = 1;
  d.y = 2;
  cout << d.x << " " << d.y << "\n";
};
