#include "Equipe.h"
#include <iterator>
#include <iostream>
#include <iomanip>
using namespace std;

Equipe::Equipe()
{
    Equipe("Equipe", 0);
}

Equipe::Equipe(string _nom, short _ID)
{
    this->nom = _nom;
    this->ID = _ID;
    niveauEquipe=0;
}

Equipe::~Equipe()
{
    //dtor
}

void Equipe::Engager(Joueur &_joueur)
{
    listeJoueur.push_back(_joueur);

    niveauEquipe=(niveauEquipe+_joueur.getNiveauJoueur())/listeJoueur.size();
}

void Equipe::Afficher()
{
    cout << "--------------------------------------------------------"<< endl;
    list <Joueur> :: iterator it;
    cout << this->nom << " (Equipe " <<this->ID << ")" << "       Niveau d'equipe : "<< this->getNiveauEquipe() << endl;
    cout << endl;
    for(it = listeJoueur.begin(); it != listeJoueur.end(); ++it)
    {
        cout << "Nom du joueur : " << it->getNom() <<setfill(' ')<<setw(15)<< "   Niveau : " << it->getNiveauJoueur() << endl;
    }
    cout << '\n';
    cout << "--------------------------------------------------------"<< endl;
}

int Equipe::getNiveauEquipe()
{
    return niveauEquipe;
}
