#include "Championnat.h"
#include <iostream>
#include <iterator>
#include "tools.h"

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

void Championnat::AjouterEquipe(Equipe &e)
{
    this->listeEquipe.push_front(e);
}

void Championnat::AgenderMatch()
{
    list<Equipe>::iterator it;
    list<Equipe>::iterator it2;
    list<Equipe>::iterator itTemp;
    int i=0;
    int j= 0;
    for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
        {
            i++;
            itTemp=it;
            itTemp++;
            for(it2 = itTemp ; it2!=listeEquipe.end() ; ++it2)
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

    list<Match>::iterator it;
    for (it=listeMatch.begin();it!=listeMatch.end();it++)
    {
        if(it->Hote->ID==t2 && it->invite->ID==t1)
        {

        it->setScoreHote(tools::RandomScore(it->Hote->getNiveauEquipe()));  //((it->Hote->getNiveauEquipe()*8)+(it->invite->getNiveauEquipe()*3))/120
        it->setScoreInvite(tools::RandomScore(it->invite->getNiveauEquipe())); //((it->invite->getNiveauEquipe()*8)+(it->Hote->getNiveauEquipe()*3))/120
        it->setFinMatch();

        computeClassement(*it);


        }

    }


}
void Championnat::computeClassement(Match &m)
{

    int delta = (m.getScoreHote()- m.getScoreInvite());

    cout << "delta : " << delta << endl;

    if(delta > 0)
    {

        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+3);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+0);

    }
    else if(delta == 0)
    {
        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+1);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+1);
    }
    else
    {
        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+0);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+3);
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

    for (it=listeEquipe.begin();it!=listeEquipe.end();it++)
        {
            cout    <<  "Equipe "   <<  it->ID   <<  " : " << it->nom <<endl;
        }
}


void Championnat::afficherMatchesJoues()
{
    list<Match>::iterator it;

    for (it=listeMatch.begin(); it!=listeMatch.end(); it++)
        {

            if(it->getFinMatch())
                {   cout << endl ;
                    cout << "Lieu du match : " << it->Lieu << endl;
                    cout << endl ;
                    cout << it->Hote->nom <<"    " << it->getScoreHote()<< " - " << it->getScoreInvite() << "    " <<it->invite->nom<< endl;
                    cout << endl;

                }
        }

}
void Championnat::afficherClassement()
{
    cout << "Classement du championnat " << this->nom << ":" << endl;
    cout << endl;
    list<Equipe>::iterator it;
    for(it = listeEquipe.begin();it!=listeEquipe.end();it++)
    {
        cout << it->nom << " : " << it->getPointEquipe()<<endl;
    }
}
