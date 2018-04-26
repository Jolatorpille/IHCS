#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>


class Joueur
{
    public:
        Joueur();
        Joueur(std::string _nom, int niveau);
        virtual ~Joueur();
        //méthodes
        void Afficher();
    protected:

    private:
        std::string nom;
        int NombreButs;
        int niveauJoueur;
};

#endif // JOUEUR_H
