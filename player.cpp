#include <iostream>
#include <string>
#include <cstring>

using namespace std;

typedef struct player {
  int id;
  int numberOfUnities;
  string playerName;
  bool isAlive();
} player;

string tempName = "";

void createPlayers(int id, player *player1, int id2, player *player2){
    //CREATE PLAYER1

    // player *p1 = &player1;
    player1->id = 1;
    cout << "Okay Player 1, how should I call you ? (max 7 chars)" << '\n';
    cout << ">> ";
    cin >> tempName;
    while (tempName.length() == 0 || tempName.length() > 7 ) {
      cout << "Ahem... I told you max 7 chars (- . - )\"" << '\n';
      cout << ">> ";
      cin >> tempName;
    }
    player1->playerName = tempName;
    tempName = "";
    cout << "Okay Player 1, now you are " << player1->playerName << "." << '\n' << '\n';

    //CREATE PLAYER 2

    player2->id = 2;
    cout << "Okay Player 2, how should I call you ?" << '\n';
    cout << ">> ";
    cin >> tempName;
    while (tempName.length() == 0 || tempName.length() > 7 ) {
      cout << "Ahem... I told you max 7 chars \"(- . - )" << '\n';
      cout << ">> ";
      cin >> tempName;
    }
    player2->playerName = tempName;
    tempName = "";
    cout << "Okay Player 2, now you are " << player2->playerName << "." << '\n' << '\n';
    // id = 3;
}
