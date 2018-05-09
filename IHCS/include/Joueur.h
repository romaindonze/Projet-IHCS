#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>

using namespace std;

class Joueur
{
    public:
        Joueur();
        Joueur(string _nom, int _niveauJoueur);
        virtual ~Joueur();

        //méthodes
        void Afficher();

        //getter
        string getNom();
        int getNombreButs();
        int getNiveauJoueur();

    protected:

    private:
        //Attribus
        string nom;
        int nombreButs;
        int niveauJoueur;
};

#endif // JOUEUR_H
