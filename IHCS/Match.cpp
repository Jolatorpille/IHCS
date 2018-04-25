#include "Match.h"

Match::Match(string Lieu, Equipe Hote, Equipe invite)
{
    this->Lieu = Lieu;
    this->Hote = Hote;
    this->invite = invite;

}

Match::~Match()
{
    //dtor
}
