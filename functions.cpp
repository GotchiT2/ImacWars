#include <iostream>
#include <string>
#include "functions.h"

character player1 = character();
character* p1 = &player1;
character player2 = character();
character* p2 = &player2;

char matrix[9][9] = {
  'X', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O',
  ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', 'O'
};


void setPlayerName(int tempId){
  string a;
  if (tempId == 1) {
    cout << "Player1, what's your gamertag ?" << '\n';
    cout << ">> ";
    getline(cin, a);
    while (a.length() == 0 || a.length() > 7) {
      cout << "Ahem... I told you max 7 chars \"(- . - )" << '\n';
      cout << ">> ";
      getline(cin, a);
    }
    p1->playerName = a;
    cout << "Okay player1, you are called " << p1->playerName << '\n' << '\n';
  }
  else {
    cout << "Player2, what's your gamertag ?" << '\n';
    cout << ">> ";
    getline(cin, a);
    while (a.length() == 0 || a.length() > 7) {
      cout << "Ahem... I told you max 7 chars \"(- . - )" << '\n';
      cout << ">> ";
      getline(cin, a);
    }
    p2->playerName = a;
    cout << "Okay player2, you are called " << p2->playerName << '\n' << '\n';
  }
  a = "";
}
