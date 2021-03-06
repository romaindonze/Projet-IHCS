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
    if(_niveauJoueur < 100)
    {
        niveauJoueur = _niveauJoueur;
    }
    else if(nom=="Federer" || nom=="Fatso")
    {
        niveauJoueur=_niveauJoueur;
    }
    else
    {
        niveauJoueur=100;
    }
}

Joueur::~Joueur()
{
    //dtor
}

void Joueur::Afficher()
{
    cout << "Nom : " << nom << '\t' << "Niveau du joueur : " << niveauJoueur << '\t' << "Nombre de buts : " << nombreButs << '\n';
}

string Joueur::getNom()
{
    return nom;
}

int Joueur::getNombreButs()
{
    return nombreButs;
}

int Joueur::getNiveauJoueur()
{
    return niveauJoueur;
}
