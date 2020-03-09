#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <iostream>
#include <string>
#include "Personnage.h"

class Monstre : public Personnage
{
    public:
        Monstre();
        Monstre(std::string Nom,
                 int ViePerso,
                 int DegatsArme,
                 std::string NomArme,
                 int ProtectionBouclier,
                 std::string NomBouclier,
                 int PtsCpt);
        Monstre(Monstre &copie);
        ~Monstre();
        void fuire();
        void attaqueMonstrueuse(Personnage &cible);
        void SetType(int type);
        void proteger();
        void actionAleatoire(Personnage &cible, int token);


    private:
        int m_pts_competence;
};

#endif
