#ifndef MATCH_H
#define MATCH_H
#include <string>
#include "Equipe.h"

using namespace std;


class Match
{
    public:

        Match(string,Equipe,Equipe);


        int getScoreHote();
        int getScoreInvite();
        bool getFinMatch();
        void setScoreHote(int);
        void setScoreInvite(int);
        void setFinMatch();

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
