#ifndef _BASE_H
#define _BASE_H

#include <string> 
#include <sstream> 
using std::stringstream;
#include <iostream> 
using std::cout;

struct Base {
  int x;
  Base () {
  };
  void set ( int *i, char* v ) {
    stringstream ss;
    ss << v;
    ss >> *(i);
    cout << "setting to " << *i << "\n";
    cout << "ss.bad() = " << ss.bad() << "\n";
    cout << "\n";
  };
};

#endif // _BASE_H
