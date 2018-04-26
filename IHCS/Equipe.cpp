#include "Equipe.h"
#include <iterator>
#include <iostream>
#include <iomanip>
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
    cout << this->nom << " (Equipe " <<this->ID << ") :" << endl;
    cout << endl;
    for(it = palmares.begin(); it != palmares.end(); ++it)
    {

        cout << "Nom du joueur : " << it->getNom() <<setfill(' ')<<setw(15)<< "   Aptitude : " << it->getNiveauJoueur() << endl;
    }
    cout << '\n';
}
int Equipe::getNiveauEquipe()
{
    return niveauEquipe;
}
