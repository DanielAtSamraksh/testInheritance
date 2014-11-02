#ifndef _BASE_H
#define _BASE_H

#include <string>
using std::string;

#include <sstream> 
using std::stringstream;

#include <iostream> 
using std::cout;

#include <map>
using std::map;

struct Base {
  int x;
  map < string, int* > m;
  
  Base () {
    m["x"] = &(this->x);
  };
  void set ( string k, char* v ) {
    if ( m.find ( k ) == m.end() ) {
      cout << "Key " << k << " is not found!\n";
      return;
    }
    stringstream ss;
    ss << v;
    ss >> *(m[k]);
    cout << "setting to " << *(m[k]) << "\n";
    cout << "ss.bad() = " << ss.bad() << "\n";
    cout << "\n";
  };
  void oldset ( int *i, char* v ) {
    stringstream ss;
    ss << v;
    ss >> *(i);
    cout << "setting to " << *i << "\n";
    cout << "ss.bad() = " << ss.bad() << "\n";
    cout << "\n";
  };
};

#endif // _BASE_H
