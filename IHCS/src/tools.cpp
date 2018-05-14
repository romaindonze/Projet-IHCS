#include "tools.h"
#include <stdlib.h>
#include <iomanip>

using namespace std;

//---------------------------------------------
//G�n�re un nombre al�atoire entre 0 et 10 par rapport au niveau de l'�quipe
//niveau ==> niveau de l'�quipe
//return ==> le score calcul�
//---------------------------------------------
double tools::GoalMarque(int niveau)
{
    return (int)((niveau/(double)10)*(rand()/(double)RAND_MAX));
}

bool tools::Compare(Equipe *&First, Equipe *&Next)
{
    return First->getPointEquipe()>=Next->getPointEquipe();
}
