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

void Match::setScoreHote(int scorehote)
{
    this->scoreHote = scorehote;
}
void Match::setScoreInvite(int scoreinvite)
{
    this->scoreInvite = scoreInvite;

}
void Match::setScoreHote(int scoreH)
{
    this->scoreHote = scoreH;
}
void Match::setScoreInvite(int scoreI)
{
    this->scoreInvite = scoreI;

}
void Match::setFinMatch(bool fin)
{
    this->termine = fin;
}

