#include <iostream>
#include <string>
#include <cstring>

using namespace std;

typedef struct unit {
  int id;
  int idPlayer;
  int x;
  int y;
  int health;
  int atk;
  int speed;
  int critical;
  string type_of_unit;
  string unit_name;

  int color;
  bool isAlive();

} unit;

int defineNbOfUnits(){
  int nbFighters;
  cout << "How many fighters should be created in each team ? (between 1 and 5)" << '\n';
  cout << ">> ";
  cin >> nbFighters;
  while (nbFighters < 1 || nbFighters > 5) {
    cout << "This number is not correct. Please enter a number between 1 and 5." << '\n';
    cout << ">> ";
    cin >> nbFighters;
  }
  return nbFighters;
}


void createUnits(int nbFighters, unit *nb_of_units, player *p1, player *p2){
  int temp_nb_of_unit_to_display = 0;
  char temp_type_of_unit;

  cout << "To choose your unit type : " << '\n';
  cout << "Bowman : press B" << '\n';
  cout << "Healer : press H" << '\n';
  cout << "Tank : press T" << '\n' << '\n' << '\n' << '\n';

  for (int i = 0; i < nbFighters*2; i++) {
    nb_of_units[i].id = i;
    if (temp_nb_of_unit_to_display == nbFighters) {
      temp_nb_of_unit_to_display = 0;
    }
    if (i < nbFighters) {
      temp_nb_of_unit_to_display++;
      cout << p1->playerName << " this is your unit #" << temp_nb_of_unit_to_display << '\n';
      nb_of_units[i].idPlayer = 1;
      nb_of_units[i].color = 1;
    } else {
      temp_nb_of_unit_to_display++;
      cout << p2->playerName << " this is your unit #" << temp_nb_of_unit_to_display << '\n';
      nb_of_units[i].idPlayer = 2;
      nb_of_units[i].color = 2;
    }

    cout << "Choose your type of unit : " << '\n';
    cout << ">> ";
    cin >> temp_type_of_unit;
    while (temp_type_of_unit != 'B' && temp_type_of_unit != 'b' && temp_type_of_unit != 'H' && temp_type_of_unit != 'h' && temp_type_of_unit != 'T' && temp_type_of_unit != 't') {
      cout << "This is not a unit type. Please try again..." << '\n';
      cout << ">> ";
      cin >> temp_type_of_unit;
      cout << '\n';
    }

    switch (temp_type_of_unit) {
      case 'B':
      case 'b':
        nb_of_units[i].type_of_unit = "Bowman";
        nb_of_units[i].health = 100;
        nb_of_units[i].atk = 20;
        nb_of_units[i].speed = 4;
        nb_of_units[i].critical = 10;
        cout << "You have chosen a Bowman" << '\n' << '\n';
        break;
      case 'H':
      case 'h':
        nb_of_units[i].type_of_unit = "Healer";
        nb_of_units[i].health = 75;
        nb_of_units[i].atk = 10;
        nb_of_units[i].speed = 6;
        nb_of_units[i].critical = 15;
        cout << "You have chosen a Healer" << '\n' << '\n';
        break;
      case 'T':
      case 't':
        nb_of_units[i].type_of_unit = "Tank";
        nb_of_units[i].health = 150;
        nb_of_units[i].atk = 30;
        nb_of_units[i].speed = 2;
        nb_of_units[i].critical = 12;
        cout << "You have chosen a Tank" << '\n' << '\n';
        break;
    }

    cout << "Could you give a name to your fighter please ?" << '\n';
    cout << ">> ";
    cin >> nb_of_units[i].unit_name;

    system("CLS");
    temp_type_of_unit = 'l';
  }

  // return nb_of_units;
}
