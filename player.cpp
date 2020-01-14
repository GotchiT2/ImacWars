#include <iostream>
#include <string>
#include "player.h"

using namespace std;

character::character(){
  id = 1;
  numberOfUnities = 1;
}

// void character::setPlayerName(){
//   cout << "What's your gamertag ?" << '\n';
//   cout << ">> ";
//   getline(cin, playerName);
//   cout << "Okay, you are called " << playerName << '\n';
// }


// Check if the player has lost all his unities
bool character::isAlive(){
  if (numberOfUnities == 0) {
    return false;
  }
  return true;
}
