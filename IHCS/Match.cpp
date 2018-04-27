#include "Match.h"

Match::Match(string Lieu, Equipe &Hote, Equipe &invite)

{
    this->Lieu = Lieu;
    this->Hote = &Hote;
    this->invite = &invite;

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

void Match::setScoreHote(int scoreh)
{
    this->scoreHote = scoreh;
}
void Match::setScoreInvite(int scorei)
{
    this->scoreInvite = scorei;

}

void Match::setFinMatch()
{
    this->termine = true;
}

