#ifndef DEF_AVENTURIER
#define DEF_AVENTURIER

#include <iostream>
#include <string>
#include "Personnage.h"
#include "Monstre.h"


class Aventurier : public Personnage
{
    public:
        Aventurier();
        Aventurier(
                 std::string Nom,
                 int ViePerso,
                 int DegatsArme,
                 std::string NomArme,
                 int ProtectionBouclier,
                 std::string NomBouclier,
                 int ManaPerso);

        Aventurier(Aventurier &copie);
        ~Aventurier();
        void Sortilege(Monstre &cible);
        void Demander_Action(Monstre &cible);
        void proteger();

    private:
        int m_mana;
};

#endif
