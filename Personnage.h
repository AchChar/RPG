#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"

class Personnage
{
    public:
    Personnage();
    Personnage(
    std::string Nom,
    int ViePerso,
    int DegatsArme,
    std::string NomArme,
    int ProtectionBouclier,
    std::string NomBouclier);
    Personnage(Personnage &Copie);

    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void proteger();
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
    void changerBouclier(std::string nomNouveauBouclier,int protectionNouveauBouclier);
    bool estVivant();
    std::string getName();
    int getLife();
    // void Demander_Action(Personnage &cible);

  protected:

    std::string m_nom;
    int m_vie;
    Arme *m_arme;
    Bouclier *m_bouclier;
};

#endif
