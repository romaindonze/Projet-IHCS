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
        void AfficherPalmares();

        //Attribus
        string nom;
        list<Joueur> listeJoueur;
        short ID;
        list<std::string> palmares;

        //getter + setter
        int getNiveauEquipe();
        int getPointEquipe();
        void setPointEquipe(int);

    protected:

    private:
        //Attribus
        int niveauEquipe;
        int SommeNiveauEquipe;
        int PointEquipe=0;
};

#endif // EQUIPE_H
