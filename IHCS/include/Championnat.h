#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H
#include <list>
#include <string>
#include "Equipe.h"
#include "Match.h"


class Championnat
{
    public:
        Championnat(string);
        Championnat(string,string[],int);
        virtual ~Championnat();

        void AjouterEquipe(Equipe&);
        void AgenderMatch();
        void jouerMatch(short,short);
        void reinitialiser();
        void finChampionnat();
        void afficherEquipes();
        void afficherMatchesJoues();
        void afficherClassement();

    protected:

    private:

        void computeClassement(Match&);

        list<Match> listMatch;
        list<Equipe*> listEquipe;
        string nom;
        string tabLieu[20];
};

#endif // CHAMPIONNAT_H
