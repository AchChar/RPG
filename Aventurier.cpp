#include "Aventurier.h"
using namespace std;

Aventurier::Aventurier()
{

}

Aventurier::Aventurier(
  string Nom,
  int ViePerso,
  int DegatsArme,
  string NomArme,
  int ProtectionBouclier,
  string NomBouclier,
  int ManaPerso):
 Personnage(Nom,ViePerso, DegatsArme, NomArme, ProtectionBouclier, NomBouclier),
 m_mana(ManaPerso)
 ///Constructeur d'Aventurier (Personnage Joueur)
{

}

Aventurier::Aventurier(Aventurier &Copie):
    Personnage(Copie),
    m_mana(Copie.m_mana)
///Constructeur de Copie d'Aventurier
{

}

Aventurier::~Aventurier()
///Destructeur d'Aventurier
{

}

void Aventurier::Sortilege(Monstre &cible)
///Permet à l'Aventurier d'attaquer un Monstre avec un sort et coute du m_mana
{
  if (cible.getLife() == 0)
  {
    cout<<endl<< "Vous vous moquez du fuyard, il est deja bien loin de toute facon"<<endl<<endl;
  }
  else
  {
    if (m_mana<15)
    {
      cout<<endl<< "Vous n'avez plus assez de mana, dommage vous passez votre tour" << endl<<endl;
    }
    else
    {
      cout <<endl<<m_nom<<" ("<<m_mana<<" MANA)"<<" lance un sort ("<<60+(int)(m_mana/4)<<" DMG) sur "<<cible.getName()<<" ("<<cible.getLife()<<" PV)"<<endl<<endl;
      if (m_mana == 0){
        m_mana += 1;
      }
      cible.recevoirDegats(60+(int)(m_mana/4));
      m_mana -= 15;
      if (cible.estVivant() == false)
      {
        cout<<endl<<cible.getName()<<" est mort !"<<endl<<endl;
      }
    }
  }
}

void Aventurier::proteger()
///Permet à l'aventurier de régénérer(m_vie/m_mana) en fonction de son Bouclier
{
  cout  <<endl<<endl<<m_nom<<"("<<m_vie<<" PV)"<<" se defend avec "<<m_bouclier->getName()<<" ("<<m_bouclier->getStat()<<" DFS)"<<endl<<endl;
  m_vie += m_bouclier->getStat();
  m_mana += m_bouclier->getStat();
}

void Aventurier::Demander_Action(Monstre &cible)
///Recupere et effectue l'action choisie par l'Aventurier
{
  cout << endl<<"Que voulez vous faire ?" << endl;
  cout <<endl<< "(A)ttaquer avec votre arme ("<<m_arme->getStat()<<" DMG)"<< endl;
  cout << "(J)eter un sort (" <<60+(int)(m_mana/4)<<" DMG)"<< endl;
  cout << "(B)oire une potion (+ "<<35<<" PV)"<<endl;
  cout << "Vous (D)éfendre (+ "<<m_bouclier->getStat()<<" PV et "<<m_bouclier->getStat()<<" MANA)"<< endl<<endl;
  string decision;
  cin >> decision;
  if (decision == "a" | decision == "A")
  {
    attaquer(cible);
  }
  if (decision == "j" | decision == "J")
  {
    Sortilege(cible);
  }
  if (decision == "b" | decision == "B")
  {
    boirePotionDeVie(35);
  }
  if (decision == "d" | decision == "D")
  {
    proteger();
  }
  if (decision != "A" && decision != "B" && decision != "D" && decision != "J" && decision != "a" && decision != "b" && decision != "d" && decision != "j")
  {
    cout<<"Vous passez votre tour"<<endl<<endl;
  }
}
