#ifndef MATCH_H
#define MATCH_H
#include <string>
#include "Equipe.h"

using namespace std;

class Match
{
    public:
        Match(string,Equipe&,Equipe&);

        //getter
        int getScoreHote();
        int getScoreInvite();
        bool getTermine();

        //setter
        void setScoreHote(int);
        void setScoreInvite(int);
        void setTermine();

        //Attribus
        string Lieu;
        Equipe *Hote;
        Equipe *invite;

    protected:

    private:
        //Attribus
        int scoreHote;
        int scoreInvite;
        bool termine;


};

#endif // MATCH_H
