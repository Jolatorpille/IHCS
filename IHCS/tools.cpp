#include "tools.h"
#include <stdlib.h>

//---------------------------------------------
//Permet d'avoir un nombre en 0 et 10
//niveau ==> niveau de l'équipe
//return ==> le score calculer
//---------------------------------------------
double tools::RandomScore(int niveau)
{
    return (int)((niveau/(double)10)*(rand()/(double)RAND_MAX));
}
