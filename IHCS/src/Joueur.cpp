#include "Joueur.h"
#include <iostream>
using namespace std;

Joueur::Joueur()
{
    Joueur("Joueur", 50);
}
Joueur::Joueur(string _nom, int _niveauJoueur)
{
    nom=_nom;
    niveauJoueur=_niveauJoueur;
     if(_niveauJoueur > 100)
    {
        niveauJoueur = 100;
    }
    else
    {
        niveauJoueur=_niveauJoueur;
    }
}

Joueur::~Joueur()
{
    //dtor
}

void Joueur::Afficher()
{
    cout << "Nom : " << nom << '\t' << "Niveau du joueur : " << niveauJoueur << '\t' << "Nombre de buts : " << NombreButs << '\n';
}
