#ifndef _BASE_H
#define _BASE_H

#include <string> 
#include <sstream> 
using std::stringstream;

struct Base {
  int x;
  Base () {
  };
  void set ( int *i, char* v ) {
    stringstream ss;
    ss << v;
    ss >> *(i);
  };
};

#endif // _BASE_H
