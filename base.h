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

struct Setter {
  map < string, int* > m;

  void add ( string k, int* ptr ) {
    m[k] = ptr;
  };
  
  void set ( string k, char* v ) {
    if ( m.find ( k ) == m.end() ) {
      cout << "Key " << k << " is not found!\n";
      return;
    }
    stringstream ss;
    ss << v;
    ss >> *(m[k]);
    cout << "setting " << k << " to " << *(m[k]) << "\n";
    cout << "ss.bad() = " << ss.bad() << "\n";
    cout << "\n";
  };
};

struct Base {
  int x;
  Setter setter;

  void set ( string k, char *v ) {
    return this->setter.set ( k, v );
  };
  
  Base () {
    setter.add("x", &(this->x));
  };

};


#endif // _BASE_H
