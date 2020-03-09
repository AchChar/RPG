#include <iostream>
#include <string>
#include "Personnage.h"
#include "Aventurier.h"
#include "Monstre.h"
#include "Maps.h"
using namespace std;

int main()

/// \mainpage Projet_RPG
/// \section intro_sec Introduction
///   Ce projet est un RPG basé sur console
///
///   Le personnage entre dans un donjon.
///   Il a un niveau de vie (200) et de mana (100) pour jeter des sorts.
///   Lorsqu'il son à zero, le joueur respectivment meurt ou ne peut plus jeter de sort.
///   Il a un sort de puissance proportionel à son niveau de mana pour tuer ses ennmis.
///   Il a différentes armes pour tuer ses ennmis.
///   Il a différents boucliers magics pour régenerer sa vie et son mana.
///   Il peut se déplacer de carte en carte avec 3 possibillités de direction générées aléatoirement.
///   Sur chaque carte visitée apparait entre 1 et 3 monstres (8 types de monstre avec leurs armes/boucliers).
///   Lorsque tous les monstres sont morts la map peut être lootée.
///   Il y a entre 1 et 3 objets par map (arme et/ou bouclier) dont 10 différents de chaque.
///   Le personnage ne peut porter qu'une arme et qu'un bouclier.
///   Les objets sont présentés les uns apres les autres.
///   Si le joueur en choisi un, il l'équipe et change de map directement.
///   Toute carte (re)visitée sera (ré)génerée aléatoirement.
///   Le boss apparait sur la 4e carte visitée.
///   Le jeu se termine lorsque le boss est vaincu ou que le joueur est mort.
/// \section install_sec Installation
///
///   Build wih cmake version 3.16.1
///
///   cd ./my_rpg_folder
///
///   cmake .
///
///   cmake --build .
///
///   To Run :
///
/// . /main

{

    cout  <<endl<< "Bienvenue dans le donjon de Tristram..."<<endl;
    cout  <<"Prenez garde aventurier..." <<endl;
    cout  <<"De nombreuses menaces rodent dans l'obscurite..."<<endl;
    cout <<endl<< "Quel est votre nom ? " << endl<<endl;
    string Name;
    cin >> Name;
    cout<<endl<< "Bonne Chance "<<Name<<" !"<<endl;
    Aventurier Hero(Name,200,30,"Epee_en_bois",15,"Bouclier_en_bois",100);
    Maps Tristram(0,0,0);
    int Token = 1, nb_monstre = 0;
    srand((unsigned)time(NULL));
    nb_monstre = rand()%2+1;
    for (int i = 0; i < 6; i++){
      Tristram.Changer();
      Token = Tristram.Combat(Hero,nb_monstre);
      if (Token == 0){
        break;
      }
      Tristram.Loot(Hero);
    }
    // Tristram.~Maps();

    return 0;
}
