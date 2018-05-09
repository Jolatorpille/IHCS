#include "Equipe.h"
#include <iterator>
#include <iostream>
#include <iomanip>
#include "tools.h"
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
    this->PointEquipe =0;
}

Equipe::~Equipe()
{
    //dtor
}

void Equipe::Engager(Joueur &j)
{
   if(j.getIsFree())
   {
        if(listeJoueur.size() < 6)
        {
            listeJoueur.push_front(j);
        }
        else
        {
            listeJoueur.push_back(j);
        }
        j.setIsFree(false);
        SommeNiveauEquipe += j.getNiveauJoueur();
        niveauEquipe = (SommeNiveauEquipe)/(listeJoueur.size());
    }
    else
    {
        cout << j.getNom() << " est deja dans une autre equipe. " << endl;
       cout << endl;
    }
}

void Equipe::Afficher()
{
    tools::afficherSeparation();
    list <Joueur> :: iterator it;
    cout << this->nom << " (Equipe " <<this->ID << ")" << "       Aptitude d'equipe : "<< this->getNiveauEquipe() << endl;
    cout << endl;
    for(it = listeJoueur.begin(); it != listeJoueur.end(); ++it)
    {

        cout << "Nom du joueur : " << it->getNom() <<setfill(' ')<<setw(15)<< "   Aptitude : " << it->getNiveauJoueur() << endl;
    }
    cout << '\n';
    tools::afficherSeparation();
}

void Equipe::AfficherPalmares()
{
    list<string>::iterator it;
    cout<< "Victoire de l'equipe " << this->nom << ": " << endl;
    int i =1;
    for(it = palmares.begin();it!=palmares.end();it++)
    {
        cout<< i << ") " << *it<<endl ; //todo
        i++;

    }
}

int Equipe::getNiveauEquipe()
{
    return niveauEquipe;
}
int Equipe::getPointEquipe()
{
    return PointEquipe;
}
void Equipe::setPointEquipe(int point)
{
    this->PointEquipe = point;
}
