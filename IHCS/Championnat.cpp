#include "Championnat.h"
#include <iostream>
#include <iterator>

Championnat::Championnat(string nom)
{
    this->nom=nom;
}


Championnat::~Championnat()
{
    //dtor
}

void Championnat::AjouterEquipe(Equipe e)
{
    this->listeEquipe.push_front(e);
}

void Championnat::AgenderMatch()
{
    list<Match>::iterator it;
    list<Match>::iterator it2;
    for (it=listeMatch.begin();it!=listeMatch.end();it++)
        {

        }

}

void Championnat::jouerMatch(short t1, short t2)
{

}

void Championnat::reinitialiser()
{

}

void Championnat::afficherEquipes()
{
    list<Equipe>::iterator it;

    unsigned int i=0;
for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
    {
        i++;
        cout    <<  "Equipe "   <<  i   <<  ":" << it->nom <<endl;
    }
}


void Championnat::AfficherMatchesJoues()
{

}
