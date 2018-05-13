#include <iostream>
#include <string>
#include "Championnat.h"
#include "Match.h"
#include "Equipe.h"
#include "Joueur.h"
#include <iomanip>

using namespace std;

int main()
{
    //JOUEURS

	Joueur j1("Crosby", 400);

	Joueur j2("Kane", 95);
	Joueur j3("Ovechkin", 94);
	Joueur j4("Brodeur", 97);
	Joueur j5("McDavid", 98);
	Joueur j55("Hischier", 85);

	Joueur j6("Kopitar", 93);
	Joueur j7("Daughty", 90);
	Joueur j8("Carter", 85);
	Joueur j9("Quick", 92);
	Joueur j10("Kempe", 88);

	Joueur j11("Obama",45);
	Joueur j12("Poutine", 99);
	Joueur j13("Macron", 13);
	Joueur j14("Adolph", 80);
	Joueur j15("Trump", 16);

	Joueur j16("Durif", 14);
	Joueur j17("BobylaPointe", 56);
	Joueur j18("Mader", 1);
	Joueur j19("Spiderman", 8);
	Joueur j20("Batman", 50);



	//EQUIPES

	Equipe equipe1("NULLOS",1);
	Equipe equipe2("LA KINGS",2);
	Equipe equipe3("DICTATOR",3);
	Equipe equipe4("REPLTILIEN", 4);
	Equipe equipe5("POWER RANGERS",5);


	//MERCATO


	equipe1.Engager(j1);

	equipe5.Engager(j1);
	equipe5.Engager(j2);
	equipe5.Engager(j3);
	equipe5.Engager(j4);
	equipe5.Engager(j5);
	equipe5.Engager(j55);


	equipe2.Engager(j6);
	equipe2.Engager(j7);
	equipe2.Engager(j8);
	equipe2.Engager(j9);
	equipe2.Engager(j10);

	equipe3.Engager(j11);
	equipe3.Engager(j12);
	equipe3.Engager(j13);
	equipe3.Engager(j14);
	equipe3.Engager(j15);

	equipe4.Engager(j16);
	equipe4.Engager(j17);
	equipe4.Engager(j18);
	equipe4.Engager(j19);
	equipe4.Engager(j20);


    equipe1.Afficher();
	equipe2.Afficher();
	equipe3.Afficher();
	equipe4.Afficher();
	equipe5.Afficher();

	//DEBUT CHAMPIONNAT

	int nbDeLieu =6;

	string tabLieu[nbDeLieu];

	tabLieu[0]="PARIS";
    tabLieu[1]="ROME";
    tabLieu[2]="BERNE";
    tabLieu[3]="LONDRES";
    tabLieu[4]="MOSCOU";
    tabLieu[5]="TOKYO";


	Championnat chpt1("IHCS",tabLieu,nbDeLieu);

	chpt1.AjouterEquipe(equipe1);
	chpt1.AjouterEquipe(equipe2);
	chpt1.AjouterEquipe(equipe3);
	chpt1.AjouterEquipe(equipe4);
	chpt1.AjouterEquipe(equipe5);


	//LISTE D'EQUIPES INSCRITES


	chpt1.afficherEquipes();


	//CALENDRIER DES MATCHES

	chpt1.AgenderMatch();


	//SIMULER MATCH
	chpt1.jouerMatch(equipe5.ID,equipe2.ID);
	chpt1.jouerMatch(equipe5.ID,equipe3.ID);
	chpt1.jouerMatch(equipe5.ID,equipe4.ID);
	chpt1.jouerMatch(equipe2.ID,equipe3.ID);
	chpt1.jouerMatch(equipe2.ID,equipe4.ID);
	chpt1.jouerMatch(equipe3.ID,equipe4.ID);


	//RESULTAT DES MATCHES


	chpt1.afficherMatchesJoues();

	//AFFICHAGE CLASSEMENT
	chpt1.afficherClassement();


	//FIN DU CHAMPIONNAT
	chpt1.finChampionnat();

    //AFFICHAGE DU PALMARES
	equipe1.AfficherPalmares();
	equipe2.AfficherPalmares();
	equipe3.AfficherPalmares();
	equipe4.AfficherPalmares();
	equipe5.AfficherPalmares();


    //NOUVELLE SAISON
    Championnat chpt2("Coupe Stanley");


    //AJOUTER EQUIPE AU CHAMPIONNAT
    chpt2.AjouterEquipe(equipe1);
	chpt2.AjouterEquipe(equipe2);
	chpt2.AjouterEquipe(equipe3);
	chpt2.AjouterEquipe(equipe4);
	chpt2.AjouterEquipe(equipe5);


	//AGENDER LES MATCHS
    chpt2.AgenderMatch();


    //JOUER MATCH
	chpt2.jouerMatch(equipe5.ID,equipe2.ID);
	chpt2.jouerMatch(equipe5.ID,equipe3.ID);
	chpt2.jouerMatch(equipe5.ID,equipe4.ID);
	chpt2.jouerMatch(equipe2.ID,equipe3.ID);
	chpt2.jouerMatch(equipe2.ID,equipe4.ID);
	chpt2.jouerMatch(equipe3.ID,equipe4.ID);

	//AFFICHER MATCHS JOUES
	chpt2.afficherMatchesJoues();

	//AFFICHER CLASSEMENT
	chpt2.afficherClassement();

	//CLOTURE CHAMPIONNAT
	chpt2.finChampionnat();


    //AFFICHAGE DU PALMARES
	equipe1.AfficherPalmares();
	equipe2.AfficherPalmares();
	equipe3.AfficherPalmares();
	equipe4.AfficherPalmares();
	equipe5.AfficherPalmares();



	//EFFACER EQUIPE DU CHAMPIONNAT
	chpt1.reinitialiser();
    return 0;
}
