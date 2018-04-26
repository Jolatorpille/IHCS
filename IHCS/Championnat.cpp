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
    list<Equipe>::iterator it;
    list<Equipe>::iterator it2;
    string s= "Match ";
    int i=0;

    for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
        {
            i++;
            for(it2=it;it2!=listeEquipe.end();++it2)
            {
                Match("Match"+i,(*it),(*it2));
            }

        }
}

void Championnat::jouerMatch(short t1, short t2)
{
    list<Match>::iterator it;
    for (it=listeMatch.begin();it!=listeMatch.end();it++)
    {
        if(it->Hote.ID==t1 && it->invite.ID==t2)
        {

        }
    }
}

void Championnat::reinitialiser()
{
    listeEquipe.clear();
    listeMatch.clear();
}

void Championnat::afficherEquipes()
{
    list<Equipe>::iterator it;

    unsigned int i=0;
    for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
        {
            i++;
            cout    <<  "Equipe "   <<  i   <<  ": " << it->nom <<endl;
        }
}


void Championnat::AfficherMatchesJoues()
{
    list<Match>::iterator it;
    for (it=listeMatch.begin();it!=listeMatch.end();it++)
        {
            if(it->getFinMatch())
                {
                    cout << it->Lieu << endl;
                }
        }

}
