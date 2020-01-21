#include <iostream>
#include <string>
#include <cstring>

#include "functions.h"
#include "player.h"
#include "units.h"
#include "display.h"

using namespace std;

player player1;
player player2;
int nbFighters;



int main(int argc, char const *argv[]) {
  dispRules();
  system("CLS");
  createPlayers(1, &player1, 2, &player2);
  system("CLS");
  nbFighters = defineNbOfUnits();
  unit nb_of_units[nbFighters*2];
  createUnits(nbFighters, nb_of_units, &player1, &player2);

  unit *units_table[10][10];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      units_table[i][j] = NULL;
    }
  }
  preDisplay(units_table);

  setUpPos(units_table, nb_of_units, nbFighters, &player1, &player2);


  return 0;
}
