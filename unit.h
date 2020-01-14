#pragma once

#include <iostream>
#include <string>
#include "stdlib.h"

using namespace std;

class unit {
public:
  createUnit();
  int playerId; //who's the owner ?
  int id;
  string unitName;
  int x,y; //position
  int health; //from 100 to 0
  int strength;
  int speed; //displacement capacity

  void destroy(/* arguments */) {
    /* code */
  }
};
