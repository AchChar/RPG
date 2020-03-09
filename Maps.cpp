#include "Maps.h"
#include <iostream>
#include <time.h>
using namespace std;

Maps::Maps()
{

}

Maps::Maps(int Seuil_Boss,
           int x,
           int y):

m_maps_Seuil_Boss(Seuil_Boss),
m_maps_x(x),
m_maps_y(y)

{
  /// Constructeur de Maps avec un cote bloque aleatoirement
  srand((unsigned)time(NULL));
  m_cote_bloque = rand()%4;

}

Maps::~Maps()
/// Destructeur de Maps
{

}

void Maps::Loot(Personnage &Aventurier)
{
  ///Génère et équipe entre 1 et 4 Objet pour la Maps.
  string Objet_choisi,reponse;
  int nb_objet,num_objet,token;
  srand((unsigned)time(NULL));
  nb_objet = rand()%3+1;
  std::cout << "Vous avez trouvé des objets dans cette pieces :"<<endl<< endl;
  std::vector<Objet> m_Objets_Map(nb_objet);
  for(int i = 0; i <= m_Objets_Map.size(); i++)
  {
    num_objet = rand()%10+1;
    token = rand()%2;
    if (token == 0)
    {
      Arme m_Objets_Map[i];
      m_Objets_Map[i].setType(num_objet);
      std::cout << (m_Objets_Map[i].getName()) << " ("<< (m_Objets_Map[i].getStat()) << ")" <<endl<<endl;
      std::cout<<"Voulez vous cet objet ? (Y/N)"<<endl<<endl;
      cin>>reponse;
      if (reponse == "Y" | reponse == "y")
      {
        Aventurier.changerArme(m_Objets_Map[i].getName(),m_Objets_Map[i].getStat());
        break;
      }
      if(reponse != "Y" && reponse != "y")
      {

      }
    }

    if (token == 1)
    {
      Bouclier m_Objets_Map[i];
      m_Objets_Map[i].setType(num_objet);
      std::cout << (m_Objets_Map[i].getName()) << " ("<< (m_Objets_Map[i].getStat()) << ")" <<endl<<endl;
      std::cout<<"Voulez vous cet objet ? (Y/N)"<<endl<<endl;
      cin>>reponse;
      if (reponse == "Y" | reponse == "y")
      {
        Aventurier.changerBouclier(m_Objets_Map[i].getName(),m_Objets_Map[i].getStat());
        break;
      }
      if(reponse != "Y" && reponse != "y")
      {

      }
    }
  }
}

int Maps::Combat(Aventurier &Aventurier, int nombre_monstres)
{
  ///Genere le boss ou les Monstre et les fais se battre avec l'Aventurier
  std::cout <<endl<< "Préparez vous au combat !" << endl<<endl;
  int Random_coin;
  srand((unsigned)time(NULL));
  if (m_maps_Seuil_Boss == 4){
    std::cout << "Attention, la pièce semble étrangement calme..."<<endl<<endl;
    Monstre Boss("BOSS",350,100,"HELLFIRE",50,"Cage en Os",10);
    while (Boss.estVivant() == true){
      Random_coin = rand()%3;
      Boss.actionAleatoire(Aventurier,Random_coin);
      if (Aventurier.estVivant() == false){
        std::cout <<endl<<endl<<"VOUS ETES MORT : FIN DU JEU, REESSAYER ?" <<endl<<endl;
        // Aventurier.~Aventurier();
        // Boss.~Monstre();
        return 0;
        }
        Aventurier.Demander_Action(Boss);
      }
    cout <<endl<< "Vous avez vaincu le boss, vous êtes le héro !" << endl;
    cout <<endl<< "FIN DU JEU" << endl << endl;
    // Aventurier.~Aventurier();
    // Boss.~Monstre();
    return 0;
  }

  if (m_maps_Seuil_Boss < 4){
    std::vector<Monstre> m_Monstres_Map(nombre_monstres);
    int count_monstres_morts = 0;
    for(int i = 0; i < m_Monstres_Map.size(); i++)
    {
        srand((unsigned)time(NULL));
        m_Monstres_Map[i].SetType(rand()%8);
        while (m_Monstres_Map[i].estVivant() == true){
          Random_coin = rand()%4;
          m_Monstres_Map[i].actionAleatoire(Aventurier,Random_coin);
          if (Aventurier.estVivant() == false){
            std::cout <<endl<<"MORT : FIN DU JEU, REESSAYEZ ?"<<endl<<endl;
            // Aventurier.~Aventurier();
            // m_Monstres_Map[i].~Monstre();
            return 0;
            }
            Aventurier.Demander_Action(m_Monstres_Map[i]);
          }
        if (m_Monstres_Map[i].estVivant() == false)
        {
          count_monstres_morts += 1;
          // m_Monstres_Map[i].~Monstre();
        }
        if (count_monstres_morts == m_Monstres_Map.size()){
          std::cout << "Vous êtes victorieux !"<<endl<<endl;
          return 1;
        }

      }
  }
  return 1;
}


void Maps::Changer()
{
  ///Demande et change les coordonnées(m_maps_x,m_maps_y) et le compteur du boss (m_maps_Seuil_Boss) de la Maps

  std::string Direction;

  srand((unsigned)time(NULL));
  m_cote_bloque = rand()%4;

  if (m_cote_bloque == 0){
    std::cout <<endl<< "Vous vous dirigez vers la prochaine salle."<<endl<<endl<<"Ou allez vous ? (D/L/R)" <<endl<< endl;
    cin >> Direction;
    if (Direction == "D" | Direction == "d"){
      m_maps_Seuil_Boss += 1;
      m_maps_y -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "L" | Direction == "l"){
      m_maps_Seuil_Boss += 1;
      m_maps_x -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "R" | Direction == "r"){
      m_maps_Seuil_Boss += 1;
      m_maps_x += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if(Direction != "R" && Direction != "D" && Direction != "L" && Direction != "r" && Direction != "d" && Direction != "l"){
        m_maps_Seuil_Boss += 1;
        m_maps_x += 1;
        m_maps_y +=1;
        std::cout<<endl<<"Vous empruntez un passage souterain"<<endl<<endl;
        std::cout << "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
  }

  if (m_cote_bloque == 1){
    std::cout <<endl<< "Vous vous dirigez vers la prochaine salle."<<endl<<endl<< "Ou allez vous ? (U/D/L)" <<endl<< endl;
    cin >> Direction;
    if (Direction == "U" | Direction == "u"){
      m_maps_Seuil_Boss += 1;
      m_maps_y += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "D" | Direction == "d"){
      m_maps_Seuil_Boss += 1;
      m_maps_y -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "L" | Direction == "l"){
      m_maps_Seuil_Boss += 1;
      m_maps_x -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if(Direction != "U" && Direction != "D" && Direction != "L" && Direction != "u" && Direction != "d" && Direction != "l"){
        m_maps_Seuil_Boss += 1;
        m_maps_x += 1;
        m_maps_y +=1;
        std::cout<<endl<<"Vous empruntez un passage souterain"<<endl<<endl;
        std::cout << "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
  }

  if (m_cote_bloque == 2){
    std::cout <<endl<< "Vous vous dirigez vers la prochaine salle."<<endl<<endl<< "Ou allez vous ? (U/L/R)" <<endl<< endl;
    cin >> Direction;
    if (Direction == "U" | Direction == "u"){
      m_maps_Seuil_Boss += 1;
      m_maps_y += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "L" | Direction == "l"){
      m_maps_Seuil_Boss += 1;
      m_maps_x -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "R" | Direction == "r"){
      m_maps_Seuil_Boss += 1;
      m_maps_x += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if(Direction != "U" && Direction != "L" && Direction != "R" && Direction != "u" && Direction != "l" && Direction != "r"){
        m_maps_Seuil_Boss += 1;
        m_maps_x += 1;
        m_maps_y +=1;
        std::cout<<endl<<"Vous empruntez un passage souterain"<<endl<<endl;
        std::cout << "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
  }

  if (m_cote_bloque == 3)
  {
    std::cout <<endl<< "Vous vous dirigez vers la prochaine salle."<<endl<<endl<< "Ou allez vous ? (U/D/R)" <<endl<< endl;
    cin >> Direction;
    if (Direction == "U" | Direction == "u"){
      m_maps_Seuil_Boss += 1;
      m_maps_y += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "D" | Direction == "d"){
      m_maps_Seuil_Boss += 1;
      m_maps_y -= 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction == "R" | Direction == "r"){
      m_maps_Seuil_Boss += 1;
      m_maps_x += 1;
      std::cout  <<endl<< "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
    if (Direction != "U" && Direction != "D" && Direction != "R" && Direction != "u" && Direction != "d" && Direction != "r"){
        m_maps_Seuil_Boss += 1;
        m_maps_x += 1;
        m_maps_y +=1;
        std::cout<<endl<<"Vous empruntez un passage souterain"<<endl<<endl;
        std::cout << "Vous arrivez dans une nouvelle piece, Position : ("<<m_maps_x<<","<<m_maps_y<<")"<<endl;
    }
  }

}
