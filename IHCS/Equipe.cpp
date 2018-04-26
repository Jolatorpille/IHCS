#include "Equipe.h"
#include <iterator>
#include <iostream>
using namespace std;

Equipe::Equipe()
{
    Equipe("Pittsburg", 0);
}

Equipe::Equipe(string _nom, short _ID)
{
    this->nom = _nom;
    this->ID = _ID;
    this->SommeNiveauEquipe = 0;
}

Equipe::~Equipe()
{
    //dtor
}

void Equipe::Engager(Joueur &j)
{
    if(palmares.size() < 6)
    {
        palmares.push_front(j);

    }
    else
    {
        palmares.push_back(j);
    }
    SommeNiveauEquipe += j.getNiveauJoueur();
    niveauEquipe = (SommeNiveauEquipe)/(palmares.size());

}

void Equipe::Afficher()
{
    list <Joueur> :: iterator it;
    for(it = palmares.begin(); it != palmares.end(); ++it)
    {
     cout << "coucou";
    }
    cout << '\n';
}
int Equipe::getNiveauEquipe()
{
    return niveauEquipe;
}
