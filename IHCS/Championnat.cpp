#include "Championnat.h"
#include <iostream>
#include <iterator>
#include <time.h>
#include <stdlib.h>

Championnat::Championnat(string nom)
{
    this->nom=nom;

    tabLieu[0]="CDF";
    tabLieu[1]="Neuch";
    tabLieu[2]="Morteau";
    tabLieu[3]="Villers-le-lac";
    tabLieu[4]="Pontarlier";
    tabLieu[5]="Besancon";
    tabLieu[6]="Sagne";
    tabLieu[7]="Brevine";
    tabLieu[8]="Sonbeval";
    tabLieu[9]="Cul-des-pres";
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
int j= 0;
    for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
        {
            i++;
            it2=it;
            it2++;
            for(it2;it2!=listeEquipe.end();++it2)
            {
                Match m("Match"+i,(*it),(*it2));
                m.Lieu = tabLieu[j];
                listeMatch.push_front(m);
                j++;
            }

        }
}

void Championnat::jouerMatch(short t1, short t2)
{
    srand (time(NULL));

    list<Match>::iterator it;
    for (it=listeMatch.begin();it!=listeMatch.end();it++)
    {
        if(it->Hote.ID==t2 && it->invite.ID==t1)
        {
        it->setScoreHote(((it->Hote.getNiveauEquipe())*(it->Hote.getNiveauEquipe())*(it->invite.getNiveauEquipe()))/25000);
        it->setScoreInvite(((it->invite.getNiveauEquipe())*(it->invite.getNiveauEquipe())*(it->Hote.getNiveauEquipe()))/10000);
        it->setFinMatch();
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
            cout    <<  "Equipe "   <<  i   <<  " : " << it->nom <<endl;
        }
}


void Championnat::AfficherMatchesJoues()
{
    list<Match>::iterator it;

    for (it=listeMatch.begin(); it!=listeMatch.end(); it++)
        {

            if(it->getFinMatch())
                {
                    cout << " Lieu de la rencontre : " << it->Lieu << endl;
                    cout << it->Hote.nom <<" " << it->getScoreHote()<< " - " << it->getScoreInvite() << " " <<it->invite.nom<< endl;
                    cout << endl;

                }
        }

}
