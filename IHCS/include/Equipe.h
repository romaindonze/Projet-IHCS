#ifndef EQUIPE_H
#define EQUIPE_H

#include <string>
#include <list>

#include "Joueur.h"

using namespace std;

class Equipe
{
    public:
        Equipe();
        Equipe(string nom, short _ID);
        virtual ~Equipe();

        //méthodes
        void Engager(Joueur &_joueur);
        void Afficher();

        //Attribus
        string nom;
        list<Joueur> listeJoueur;
        short ID;

        //getter
        int getNiveauEquipe();

    protected:

    private:
        //Attribus
        int niveauEquipe;
};

#endif // EQUIPE_H
