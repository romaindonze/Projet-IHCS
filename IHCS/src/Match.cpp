#include "Match.h"

using namespace std;

Match::Match(string Lieu, Equipe &Hote, Equipe &invite)

{
    this->Lieu = Lieu;
    this->Hote = &Hote;
    this->invite = &invite;
}
