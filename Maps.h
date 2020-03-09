#ifndef DEF_MAPS
#define DEF_MAPS
#include "Personnage.h"
#include "Monstre.h"
#include "Aventurier.h"
#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include <vector>

class Maps{

public :

Maps();

Maps(int Seuil_Boss,
     int x,
     int y);

~Maps();

void Changer();
int Combat(Aventurier &Aventurier,int nombre_monstres);
void Loot(Personnage &Aventurier);


protected :

int m_maps_Seuil_Boss;
int m_maps_x;
int m_maps_y;
std::vector<Monstre> m_Monstres_Map;
std::vector<Objet> m_Objets_Map;
int m_cote_bloque;

};

#endif
