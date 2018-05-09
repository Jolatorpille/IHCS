#ifndef EQUIPE_H
#define EQUIPE_H
#include <string>
#include <list>
#include "Joueur.h"


class Equipe
{
    public:
        Equipe();
        Equipe(std::string nom, short id);
        virtual ~Equipe();

        //méthodes
        void Engager(Joueur &j);
        void Afficher();
        void AfficherPalmares();

        //attributs
        std::string nom;
        std::list<Joueur> listeJoueur;
        short ID;
        std::list<std::string> palmares;


        //getter & setter
        int getNiveauEquipe();
        int getPointEquipe();
        void setPointEquipe(int);

    protected:

    private:
        //attributs
        int niveauEquipe;
        int SommeNiveauEquipe;
        int PointEquipe;

};

#endif // EQUIPE_H
