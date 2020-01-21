#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char table[9][9];

void display(unit *matrix[9][9]) {
  cout << "      0 |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |" << '\n';
  cout << "_______________________________________________________________" << '\n';
  for (int i = 0; i <= 9; i++) {
    cout << " " << i << "   ";
    for (int j  = 0; j <= 9; j++) {
      cout << table[i][j] << "  |  ";
    }
    cout << '\n';
    cout << "_______________________________________________________________" << '\n';
  }
}

void preDisplay(unit *matrix[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (matrix[i][j] != NULL) {
        if (matrix[i][j]->idPlayer == 1)
          table[i][j] = 'X';
        else
          table[i][j] = 'O';
      }
      else
        table[i][j] = ' ';
    }
  }
  display(matrix);
}

void setUpPos(unit *matrix[9][9], unit *units_table, int nbFighters, player *p1, player *p2) {
  cout << "Now it's time to choose the starting position of each character." << '\n';
  cout << "To do this, choose x (between 0 and 9), press Enter, and repeat it for y." << '\n';
  cout << "Warning ! Do not try to place your characters out of the map, and on other character's position. (spoiler : it won't work)." << '\n' << '\n';



  for (int i = 0; i < nbFighters*2; i++) {
    int x,y;
    if (units_table[i].idPlayer == 1)
      cout << "Okay " << p1->playerName << ", enter the X position of your unit #" << i+1 << " (between 0 and 9)" << '\n';
    else
      cout << "Okay " << p2->playerName << ", enter the X position of your unit #" << i-nbFighters +1 << " (between 0 and 9)" << '\n';

    cout << ">> ";
    cin >> x;
    while (x < 0 || x > 9) {
      cout << "X not in range" << '\n';
      cout << ">> ";
      cin >> x;
    }

    if (units_table[i].idPlayer == 1)
      cout << "Now, " << p1->playerName << ", enter the Y position of your unit #" << i+1 << " (between 0 and 9)" << '\n';
    else
      cout << "Now, " << p2->playerName << ", enter the Y position of your unit #" << i-nbFighters +1 << " (between 0 and 9)" << '\n';

    cout << ">> ";
    cin >> y;

    while (y < 0 || y > 9) {
      cout << "Y not in range" << '\n';
      cout << ">> ";
      cin >> y;
    }

    while(matrix[x][y] != NULL) {
      cout << "the (x,y) position is already taken, please, enter new positions." << '\n';
      cout << "x >> ";
      cin >> x;
      cout  << '\n',
      cout << "y >> ";
      cin >> y;
    }

    matrix[x][y] = &units_table[i];

    units_table[i].x = x;
    units_table[i].y = y;

    system("CLS");

    preDisplay(matrix);
  }
}
