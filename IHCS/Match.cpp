#include "Match.h"

Match::Match(string Lieu, Equipe Hote, Equipe invite)
{
    this->Lieu = Lieu;
    this->Hote = Hote;
    this->invite = invite;

}


int Match::getScoreHote()
{
    return scoreHote;
}

int Match::getScoreInvite()
{
    return scoreInvite;
}

bool Match::getFinMatch()
{
    return termine;
}
