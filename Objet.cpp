#include "Objet.h"

using namespace std;

Objet::Objet()
{

}

Objet::Objet(string nom) : m_nom(nom)
///Constructeur d'Objet
{

}

Objet::~Objet()
/// Destructeur d'Objet
{

}
int Objet::getStat()
///Fonction precisée dans Arme ou Bouclier
{
return 0;
}
void Objet::setType()
///Fonction precisée dans Arme ou Bouclier
{

}
string Objet::getName()
///Renvoi le m_nom de l'Objet
{
    return m_nom;
}
