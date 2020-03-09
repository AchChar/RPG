#ifndef DEF_OBJET
#define DEF_OBJET

#include <iostream>
#include <string>

class Objet
{

  public:

    Objet();
    Objet(std::string nom);
    ~Objet();
    int getStat();
    void setType();
    std::string getName();

  protected:

    std::string m_nom;
};

#endif
