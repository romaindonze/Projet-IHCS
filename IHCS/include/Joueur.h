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
        //m�thodes
        void Afficher();
    protected:

    private:
        string nom;
        int NombreButs;
        int niveauJoueur;
};

#endif // JOUEUR_H
