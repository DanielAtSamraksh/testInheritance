#ifndef _DERIVED_H
#define _DERIVED_H

#include "base.h"

struct Derived: Base {
  int y;
  Derived () {
    m["y"] = &(this->y);
  };
};

#endif // _DERIVED_H
