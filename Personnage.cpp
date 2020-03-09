
#include "Personnage.h"
using namespace std;

Personnage::Personnage()
{

}

Personnage::Personnage(
  string Nom,
  int ViePerso,
  int DegatsArme,
  string NomArme,
  int ProtectionBouclier,
  string NomBouclier):
m_nom(Nom),
 m_vie(ViePerso)
 ///Constructeur de Personnage
{
    m_arme = new Arme(NomArme,DegatsArme);
    m_bouclier = new Bouclier(NomBouclier,ProtectionBouclier);
}

Personnage::Personnage(Personnage &Copie) :
   m_nom(Copie.m_nom),
   m_vie(Copie.m_vie)
  ///Constructeur de copie de Personnage
{
  m_arme = new Arme(*(Copie.m_arme));
  m_bouclier = new Bouclier(*(Copie.m_bouclier));
}

Personnage::~Personnage()
///Destructeur de Personnage
{

}

void Personnage::recevoirDegats(int nbDegats)
///Inflige des dégats au Personnage
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
///Permet à un Personnage d'attaquer avec son Arme
{
  if (cible.getLife() == 0)
  {
    cout <<endl<< "Vous vous moquez du fuyard, il est deja bien loin de toute facon"<<endl<<endl;
  }
  else
  {
    cout <<endl<<m_nom<<"("<<m_vie<<" PV)"<<" attaque "<<cible.getName()<<"("<<cible.getLife()<<" PV)"<<" avec "<<m_arme->getName()<<" ("<<m_arme->getStat()<<" DMG)"<<endl<<endl;
    cible.recevoirDegats(m_arme->getStat());
    if (cible.estVivant() == false)
    {
      cout<<endl<<cible.getName()<<" est mort !"<<endl<<endl;
    }
  }
}

void Personnage::proteger()
///Permet à un Personnage de régénérer(m_vie/m_mana) avec son Bouclier
{
  cout  <<endl<<m_nom<<"("<<m_vie<<" PV)"<<" se defend avec "<<m_bouclier->getName()<<" ("<<m_bouclier->getStat()<<" DMG)"<<endl<<endl;
  m_vie += m_bouclier->getStat();
}

void Personnage::boirePotionDeVie(int quantitePotion)
///Permet à un Personnage de gagner 60 points de m_vie
{
    m_vie += quantitePotion;
    cout<<endl << getName() << " boit une potion de vie et gagne 35 PV"<<endl<<endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
///Permet à un Personnage d'échanger deux Arme
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

void Personnage::changerBouclier(string nomNouveauBouclier, int protectionNouveauBouclier)
///Permet à un Personnage d'échanger deux Bouclier
{
    m_bouclier->changer(nomNouveauBouclier, protectionNouveauBouclier);
}

bool Personnage::estVivant()
///Indique si un Personnage est vivant ou non
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string Personnage::getName()
///Renvoi le m_nom du Personnage
{
  return(m_nom);
}

int Personnage::getLife()
///Renvoi la m_vie du Personnage
{
  return(m_vie);
}
