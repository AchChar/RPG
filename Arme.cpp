#include "Arme.h"

using namespace std;

Arme::Arme()
{

}

Arme::~Arme()
///Destructeur d'Arme
{

}
Arme::Arme(string nom, int degats) : Objet(nom), m_degats(degats)
///Constructeur d'Arme
{

}

void Arme::changer(string nom, int degats)
///Effectue le changement d'Arme
{
    cout <<endl<< "Vous echangez votre "<<m_nom<<"("<<m_degats<<")"<<" contre "<<nom<<"("<<degats<<")"<<endl;
    m_nom = nom;
    m_degats = degats;
}

int Arme::getStat()
///Renvoi les m_degats de l'Arme
{
    return m_degats;
}

void Arme::setType(int num_stuff)
///Defini le type de l'Arme
{
  if (num_stuff == 1){
    m_nom = "Poing_Americain";
    m_degats = 12;
  }
  if (num_stuff == 2){
    m_nom = "Couteau";
    m_degats = 24;
  }
  if (num_stuff == 3){
    m_nom = "Hachette";
    m_degats = 36;
  }
  if (num_stuff == 4){
    m_nom = "Machette";
    m_degats = 48;
  }
  if (num_stuff == 5){
    m_nom = "Hache";
    m_degats = 60;
  }
  if (num_stuff == 6){
    m_nom = "Epee";
    m_degats = 72;
  }
  if (num_stuff == 7){
    m_nom = "Arc";
    m_degats = 84;
  }
  if (num_stuff == 8){
    m_nom = "Massue";
    m_degats = 96;
  }
  if (num_stuff == 9){
    m_nom = "Fleau";
    m_degats = 108;
  }
  if (num_stuff == 10){
    m_nom = "EPEE_DU_HERO";
    m_degats = 120;
  }
}
