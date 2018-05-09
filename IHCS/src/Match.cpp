#include "Match.h"

using namespace std;

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

bool Match::getTermine()
{
    return termine;
}

void Match::setScoreHote(int _scoreHote)
{
    this->scoreHote = _scoreHote;
}
void Match::setScoreInvite(int _scoreInvite)
{
    this->scoreInvite = _scoreInvite;
}

void Match::setTermine()
{
    this->termine = true;
}
