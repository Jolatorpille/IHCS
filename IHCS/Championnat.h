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
        virtual ~Championnat();

        void AjouterEquipe();
        void AgenderMatch();
        void jouerMatch(short,short);
        void reinitialiser();
        void afficherEquipe();
        void AfficherMatchesJoues();

    protected:

    private:
        string nom;
        list<Equipe> posdjc;

};

#endif // CHAMPIONNAT_H
