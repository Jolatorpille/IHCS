#include "tools.h"

//---------------------------------------------
//Permet d'avoir un nombre en 0 et 10
//niveau ==> niveau de l'�quipe
//return ==> le score calculer
//---------------------------------------------
double tools::RandomScore(int niveau)
{
    return (int)((niveau/(double)10)*(rand()/(double)RAND_MAX));
}
