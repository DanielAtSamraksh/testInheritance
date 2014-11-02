
#include <sstream>
#include <iostream>
#include "base.h"
#include "derived.h"

using std::cout;

int main ( int argc, char *argv[]) {
  Derived d;
  d.set ( &(d.x), (char*) "1" );
  d.set ( &(d.y), (char*) "2" );
  cout << d.x << " " << d.y << "\n";
};
