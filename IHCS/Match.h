#ifndef MATCH_H
#define MATCH_H
#include <string>
#include "Equipe.h"

using namespace std;


class Match
{
    public:
        Match(string Lieu, Equipe Hote, Equipe invite);
        virtual ~Match();

        string Lieu;
        Equipe Hote;
        Equipe invite;
    protected:

    private:
        int scoreHote;
        int scoreInvite;
        bool termine;


};

#endif // MATCH_H
