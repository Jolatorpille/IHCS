#include "Joueur.h"
#include <iostream>
using namespace std;

Joueur::Joueur()
{
    Joueur("Aboubakar", 86);
}
Joueur::Joueur(string _nom, int niveau)
{
    nom = _nom;
    IsFree = true;
    if(niveau > 100)
    {
        niveauJoueur = 100;
    }
    else{
        niveauJoueur = niveau;
    }

}

Joueur::~Joueur()
{
    //dtor
}

void Joueur::Afficher()
{
    cout << "Nom : " << nom << '\t' << "Nombre de buts : " << NombreButs << '\t' << "Niveau du joueur : " << niveauJoueur << '\n';
}
int Joueur::getNiveauJoueur()
{
    return niveauJoueur;
}
string Joueur::getNom()
{
    return nom;
}

bool Joueur::getIsFree()
{
    return IsFree;
}

void Joueur::setIsFree(bool status)
{
    IsFree = status;
}
