#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void dispRules(){
  int choice = 0;
  system("CLS");
  cout << "Bienvenue dans : ImacWars"<< '\n' << '\n';
  cout << "Les regles sont simples : "<< '\n';
  cout << "1 - choisissez un nombre de combattants par equipe"<< '\n';
  cout << "2 - nommez et placez votre combattants"<< '\n';
  cout << "3 - eliminez l'equipe adverse"<< '\n' << '\n';
  cout << "Chaque unite possede une classe (archer, tank, healer) qui lui confere des specialites."<< '\n';
  cout << "Le tank a beaucoup plus de points de vie, mais fait moins de degats et est beaucoup plus lent."<< '\n';
  cout << "L'archer, personnage complet, possede des competences classiques"<< '\n';
  cout << "Le healer a moins de points de vie, se deplace plus vite et possede deux competences (regeneration / attaque)"<< '\n' << '\n';
  cout << "Lorsque c'est a votre tour, vous choisissez une unite a utiliser en entrant son ID"<< '\n';
  cout << "Ensuite, deplacez-vous en entrant les coordonnees a atteindre, puis attaquez une cible qui est dans votre champ de tir" << '\n' << '\n';
  cout << "Si vous etes prets, commencons ! (tapez 1)" << '\n';
  cout << ">> ";
  cin >> choice;
  while (choice != 1) {
    cout << "'k, then i'll wait" << '\n';
    cout << ">> ";
    cin >> choice;
  }
}
