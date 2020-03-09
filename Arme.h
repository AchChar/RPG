#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>
#include "Objet.h"

class Arme : public Objet
{
    public:

    Arme();
    Arme(std::string nom, int degats);
    ~Arme();
    void changer(std::string nom, int degats);
    int getStat();
    void setType(int num_stuff);

    private:

    int m_degats;
};

#endif
