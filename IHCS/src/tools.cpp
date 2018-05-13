#include "tools.h"
#include <stdlib.h>
#include <iomanip>

using namespace std;

//---------------------------------------------
//Permet d'avoir un nombre en 0 et 10
//niveau ==> niveau de l'équipe
//return ==> le score calculer
//---------------------------------------------
double tools::RandomScore(int niveau)
{
    return (int)((niveau/(double)10)*(rand()/(double)RAND_MAX));
}

bool tools::Compare(Equipe *&First, Equipe *&Next)
{

    return First->getPointEquipe()>=Next->getPointEquipe();

}
void tools::afficherSeparation()
{
    cout << "========================================================"<< endl;
}
