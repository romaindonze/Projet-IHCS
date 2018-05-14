#include "tools.h"
#include <stdlib.h>
#include <iomanip>

using namespace std;

//---------------------------------------------
//Génère un nombre aléatoire entre 0 et 10 par rapport au niveau de l'équipe
//niveau ==> niveau de l'équipe
//return ==> le score calculé
//---------------------------------------------
double tools::GoalMarque(int niveau)
{
    return (int)((niveau/(double)10)*(rand()/(double)RAND_MAX));
}

bool tools::Compare(Equipe *&First, Equipe *&Next)
{
    return First->getPointEquipe()>=Next->getPointEquipe();
}
