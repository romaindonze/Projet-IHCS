#include "Equipe.h"
#include <iterator>
#include <iostream>
#include <iomanip>
#include "tools.h"
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
    cout << "________________________________________________________"<< endl;
    list <Joueur> :: iterator it;
    cout << this->nom << " (Equipe " <<this->ID << ")" << "       Niveau d'equipe : "<< this->getNiveauEquipe() << endl;
    cout << endl;
    for(it = listeJoueur.begin(); it != listeJoueur.end(); ++it)
    {
        cout << "Nom du joueur : " << it->getNom() <<setfill(' ')<<setw(15)<< "   Niveau : " << it->getNiveauJoueur() << endl;
    }
    cout << '\n';
}

void Equipe::AfficherPalmares()
{
    cout << "________________________________________________________"<< endl;
    list<string>::iterator it;
    int i =1;

    cout << this->nom << endl;
    if(this->palmares.size()== 0)
        {
            cout <<  "Aucun championnat remporte. " << endl;
        }
    else
        {

            cout<< "Liste des chamionnats remportes "<< ": " << endl;
        for(it = palmares.begin();it!=palmares.end();it++)
            {
            cout<< i << ") " << *it <<endl ;
            i++;
            }
        }
}

int Equipe::getNiveauEquipe()
{
    return niveauEquipe;
}

int Equipe::getPointEquipe()
{
    return PointEquipe;
}
void Equipe::setPointEquipe(int point)
{
    this->PointEquipe = point;
}
