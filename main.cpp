#include <iostream>
#include <string>
#include <cstring>
#include "display.cpp"
#include "player.cpp"
#include "functions.cpp"
#include "unit.cpp"
#include "unit.h"

using namespace std;

int r = 0;

int main(int argc, char const *argv[]) {


  /////////////////////////////////////////
      //CHOIX DES NOMS DES JOUEURS//
  ////////////////////////////////////////
  setPlayerName(1);
  setPlayerName(2);
  cout << '\n' << '\n' << '\n' << '\n';
  cout << "let\'s have a look to the map now ? (1/0)" << '\n';
  cin >> r;
  while (r != 1){
    cout << "\'k then we'll wait. . ." << '\n';
    cout << ">> ";
    cin >> r;
  }


  system("CLS");
  // display(matrix);
  cout << '\n' << '\n';


  /////////////////////////////////////////
      //CHOIX DES NB DE PERSOS//
  ////////////////////////////////////////
  cout << "How many characters in each team ? (between 0 and 5)" << '\n';
  cout << ">> ";
  cin >> r;
  if (r == 0) {
    cout << "Ok, it\'s a draw, everybody won. GGWP";
    return 0;
  }
  p1->numberOfUnities = r;
  p2->numberOfUnities = r;
  int x,y,token;
  string name;

  cin >> x;
  cin >> y;
  cin >> name;
  createUnit(x,y, 1, 0, name);





  // for (int i = 0; i <= r*2; i++) {
  //     //CREER LES PERSOS POUR CHAQUE EQUIPE
  //     cout << "x ? >> " << '\n';
  //     cin x;
  //     cout << "y ? >> " << '\n';
  //     cin y;
  //     cout << "name ? >> " << '\n';
  //     cin n;
  //     token = r%2;
  //     unit(x,y,n)
  //     // unit u = unit();
  // }



  return 0;
}
