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

        void AjouterEquipe(Equipe);
        void AgenderMatch();
        void jouerMatch(short,short);
        void reinitialiser();
        void afficherEquipes();
        void AfficherMatchesJoues();

    protected:

    private:
        string nom;
        list<Equipe> listeEquipe;
        list<Match> listeMatch;

};

#endif // CHAMPIONNAT_H
