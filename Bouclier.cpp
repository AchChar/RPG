#include "Bouclier.h"

using namespace std;

Bouclier::Bouclier()
{

}
Bouclier::~Bouclier()
///Destructeur de Bouclier
{

}
Bouclier::Bouclier(string nom, int protection) : Objet(nom), m_protection(protection)
///Constructeur de Bouclier
{

}

void Bouclier::changer(string nom, int protection)
///Effectue l'echange de Bouclier
{
    cout <<endl << "Vous echangez votre "<<m_nom<<"("<<m_protection<<")"<<" contre "<<nom<<"("<<protection<<")"<<endl;
    m_nom = nom;
    m_protection = protection;
}

int Bouclier::getStat()
///Renvoi la capacité de régéneration m_protection du Bouclier
{
    return m_protection;
}
void Bouclier::setType(int num_stuff)
///Défini de le type de Bouclier
{
  string Objet_Aventurier[10] = {"Bouclier_de_Bois","Bouclie_Fragile","Bouclier_de_l'Ecuyer","Bouclier_Viking","Bouclier_de_Chevalier","Bouclier_Romain","Bouclier_de_Templier","Bouclier_Royale","Bouclier_de_Kratos","BOUCLIER_DU_HERO"};
  int Stat_Objet_Aventurier[10] = {7,14,21,28,35,42,49,56,63,70};

  m_nom = Objet_Aventurier[num_stuff];
  m_protection = Stat_Objet_Aventurier[num_stuff];

}
