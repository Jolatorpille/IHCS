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
        void setIsFree(bool status);
        //getter
        int getNiveauJoueur();
        bool getIsFree();

        std::string getNom();
    protected:

    private:
        std::string nom;
        int NombreButs;
        int niveauJoueur;
        bool IsFree;
};

#endif // JOUEUR_H
