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
        //attributs
        std::string nom;
        std::list<Joueur> palmares;
        short ID;
    protected:

    private:
        //attributs
        int niveauEquipe;
};

#endif // EQUIPE_H
