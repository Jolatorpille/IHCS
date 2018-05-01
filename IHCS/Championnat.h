#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H
#include <list>
#include <string>
#include "Equipe.h"
#include "Match.h"


using namespace std;

class Championnat
{
    public:
        Championnat(string);
        Championnat(string,string[],int);
        virtual ~Championnat();

        void AjouterEquipe(Equipe&);
        void AgenderMatch();
        void jouerMatch(short,short);
        void reinitialiser();
        void afficherEquipes();
        void afficherMatchesJoues();
        void afficherClassement();


    protected:

    private:

        void computeClassement(Match&);

        string nom;
        list<Equipe> listeEquipe;
        list<Match> listeMatch;
        string tabLieu[100];

};

#endif // CHAMPIONNAT_H
