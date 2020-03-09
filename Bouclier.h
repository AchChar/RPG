#ifndef DEF_BOUCLIER
#define DEF_BOUCLIER

#include <iostream>
#include <string>
#include "Objet.h"

class Bouclier : public Objet
{
    public:

    Bouclier();
    Bouclier(std::string nom, int protection);
    ~Bouclier();
    void changer(std::string nom, int protection);
    int getStat();
    void setType(int num_stuff);
    private:

    int m_protection;
};

#endif
