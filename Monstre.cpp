#include "Monstre.h"

using namespace std;


Monstre::Monstre()
{

}

Monstre::~Monstre()
///Destructeur de Monstre
{

}

Monstre::Monstre(
  std::string Nom,
  int ViePerso,
  int DegatsArme,
  std::string NomArme,
  int ProtectionBouclier,
  string NomBouclier,
  int PtsCpt):
 Personnage(Nom,ViePerso,DegatsArme,NomArme,ProtectionBouclier,NomBouclier),
 m_pts_competence(PtsCpt)
 ///Constructeur de Monstre (Personnage Non Joueur)
{

}

Monstre::Monstre(Monstre &Copie):
    Personnage(Copie),
     m_pts_competence(Copie.m_pts_competence)
  ///Constructeur de cope de Monstre
{

}


void Monstre::fuire()
///Simule la fuite d'un Monstre en mettant sa m_vie à 0
{
  m_vie = 0;
  cout<<getName()<<" prend la fuite"<<endl;
}

void Monstre::attaqueMonstrueuse(Personnage &cible)
///Permet aux Monstre d'attaquer un Personnage et coute un m_pts_competence
{
  if (m_pts_competence<1)
  {
    std::cout <<getName()<<" lance une attaque monstrueuse... " << std::endl;
    std::cout<<std::endl << "il est trop faible, l'attaque echoue" << std::endl;
  }
  else
  {
    std::cout <<getName()<<" lance une attaque monstrueuse " <<cible.getName()<<" perd 35 PV"<< std::endl;
    m_pts_competence -= 1;
    cible.recevoirDegats(35);
  }
}

void Monstre::proteger()
///Permet au Monstre de se régénérer(m_vie/m_mana) et un m_pts_competence
{
  cout  <<endl <<endl<<m_nom<<"("<<m_vie<<" PV)"<<" se defend avec "<<m_bouclier->getName()<<" (+ "<<m_bouclier->getStat()<<" PV et + 1 PC)" <<endl<<endl;
  m_vie += m_bouclier->getStat();
  m_pts_competence += 1;
}

void Monstre::actionAleatoire(Personnage &cible, int token)
///Choisi aléatoirement et effectue pour le Monstre une action (attaquer,se porteger,fuire)
{
 if(token == 0)
 {
   attaqueMonstrueuse(cible);
 }
 if(token == 1)
 {
   proteger();
 }
 if(token == 2)
 {
   attaquer(cible);
 }
 if(token == 3)
 {
   fuire();
 }
}

void Monstre::SetType(int type)
///Defini le type d'un Monstre
{
  if (type == 0){
    m_nom = "Goul";
    m_vie = 25;
    m_arme = new Arme("Morsure",10);
    m_bouclier = new Bouclier("Bras",5);
    m_pts_competence = 1;
  }
  if (type == 1){
    m_nom = "Gargouille";
    m_vie = 35;
    m_arme = new Arme("Scilex",20);
    m_bouclier = new Bouclier("Cape",10);
    m_pts_competence = 2;
  }
  if (type == 2){
    m_nom = "Loup-Garou";
    m_vie = 40;
    m_arme = new Arme("Griffes",30);
    m_bouclier = new Bouclier("Cri",15);
    m_pts_competence = 3;
  }
  if (type == 3){
    m_nom = "Zombie";
    m_vie = 45;
    m_arme = new  Arme("AUAUAUHGHGR",40);
    m_bouclier = new  Bouclier("Gestes Bizarres",20);
    m_pts_competence = 4;
  }
  if (type == 4){
    m_nom = "Ogre";
    m_vie = 55;
    m_arme = new  Arme("Massue",50);
    m_bouclier = new  Bouclier("Petit bouclier",25);
    m_pts_competence = 5;
  }
  if (type == 5){
    m_nom = "Troll";
    m_vie = 60;
    m_arme = new  Arme("Gourdin",60);
    m_bouclier = new  Bouclier("Table",30);
    m_pts_competence = 6;
  }
  if (type == 6){
    m_nom = "Cyclope";
    m_vie = 70;
    m_arme = new Arme("Grosse Pierre",70);
    m_bouclier = new Bouclier("Gros Rocher",35);
    m_pts_competence = 7;
  }
  if (type == 7){
    m_nom = "Dragon";
    m_vie = 80;
    m_arme = new Arme("Drakaris",80);
    m_bouclier = new Bouclier("Hurlement",40);
    m_pts_competence = 8;
  }
}
