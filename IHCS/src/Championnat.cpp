#include "Championnat.h"
#include <iostream>

#include "tools.h"


Championnat::Championnat(string nom)
{
    this->nom=nom;

    tabLieu[0]="St-Imier";
    tabLieu[1]="Villeret";
    tabLieu[2]="Bumpliz";
    tabLieu[3]="Sonvilier";
    tabLieu[4]="La-bas";
    tabLieu[5]="Un peu plus loin que la-bas";
    tabLieu[6]="Encore un peu plus loin, ca commence à faire loin";
    tabLieu[7]="Au bled";
    tabLieu[8]="Dans le preau";
    tabLieu[9]="Chez moi, c'est bibi qui invite";
}

Championnat::Championnat(string nom,string lieu[],int nbDeLieu)
{
    this->nom=nom;

    for(int i = 0 ; i < nbDeLieu ; i++)
    {
        *(tabLieu+i) = lieu[i];
    }


}

Championnat::~Championnat()
{
    //dtor
}

void Championnat::AjouterEquipe(Equipe &e)
{
    if( e.listeJoueur.size() == 5)
    {
        this->listEquipe.push_back(&e);
    }
    else
    {
        cout << endl;
        cout << "L'équipe " << e.nom << " ne contient pas le bon nombre de joueurs" << endl;
        cout << endl;
    }
}

void Championnat::AgenderMatch()
{
    list<Equipe*>::iterator it;
    list<Equipe*>::iterator it2;
    list<Equipe*>::iterator itTemp;
    int i=0;
    int j= 0;
    for (it=listEquipe.begin();it!=listEquipe.end();it++)
        {
            i++;
            itTemp=it;
            itTemp++;
            for(it2 = itTemp ; it2!=listEquipe.end() ; ++it2)
            {
                Match m("Match"+i,(**it),(**it2));
                m.Lieu = tabLieu[j];
                listMatch.push_front(m);
                j++;
            }
        }
}

void Championnat::jouerMatch(short t1, short t2)
{
    list<Match>::iterator it;
    for (it=listMatch.begin();it!=listMatch.end();it++)
    {
        if((it->Hote->ID==t1 && it->invite->ID==t2)||(it->Hote->ID==t2 && it->invite->ID==t1))
        {
        it->setScoreHote(tools::RandomScore(it->Hote->getNiveauEquipe()));  //((it->Hote->getNiveauEquipe()*8)+(it->invite->getNiveauEquipe()*3))/120
        it->setScoreInvite(tools::RandomScore(it->invite->getNiveauEquipe())); //((it->invite->getNiveauEquipe()*8)+(it->Hote->getNiveauEquipe()*3))/120
        it->setTermine();

        computeClassement(*it);


        }

    }
}

void Championnat::reinitialiser()
{
    listEquipe.clear();
    listMatch.clear();
}

void Championnat::afficherEquipes()
{
    tools::afficherSeparation();
    list<Equipe*>::iterator it;

    cout << endl;
    cout << "Equipes inscrites au championnat IHCS" <<endl;
    cout << endl;
    for (it=listEquipe.begin();it!=listEquipe.end();it++)
        {
            cout    <<  "Equipe "   <<  (*it)->ID   <<  " : " << (*it)->nom <<endl;
        }
    tools::afficherSeparation();
}

void Championnat::afficherMatchesJoues()
{
    tools::afficherSeparation();
    list<Match>::iterator it;

    for (it=listMatch.begin(); it!=listMatch.end(); it++)
        {

            if(it->getTermine())
                {   cout << endl ;
                    cout << "Lieu du match : " << it->Lieu << endl;
                    cout << endl ;
                    cout << it->Hote->nom <<"    " << it->getScoreHote()<< " - " << it->getScoreInvite() << "    " <<it->invite->nom<< endl;
                    cout << endl;

                }
        }
        tools::afficherSeparation();
}

void Championnat::computeClassement(Match &m)
{

    int delta = (m.getScoreHote()- m.getScoreInvite());

    if(delta > 0)
    {

        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+3);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+0);

    }
    else if(delta == 0)
    {
        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+1);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+1);
    }
    else
    {
        m.Hote->setPointEquipe(m.Hote->getPointEquipe()+0);
        m.invite->setPointEquipe(m.invite->getPointEquipe()+3);
    }

}
