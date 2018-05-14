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

	Joueur joueur1("Crosby", 101);
	Joueur joueur2("McDavid", 99);
	Joueur joueur3("Karlsson", 98);
	Joueur joueur4("Price", 97);
	Joueur joueur5("Kane", 96);

	Joueur joueur6("James", 1554);
	Joueur joueur7("Durant", 90);
	Joueur joueur8("Leonard", 85);
	Joueur joueur9("Curry", 89);
	Joueur joueur10("Westbrook", 75);

	Joueur joueur11("Baldi le nul",0);
	Joueur joueur12("Jo la torpille", 0);
	Joueur joueur13("Hakim du bled", 0);
	Joueur joueur14("Thomas le hockeyeur", 1);
	Joueur joueur15("la mere a Baldi", 99);

	Joueur joueur16("Iron man", 14);
	Joueur joueur17("Hulk", 56);
	Joueur joueur18("Federer", 1555);
	Joueur joueur19("Spiderman", 8);
	Joueur joueur20("Romain aka Musclor (plus fort que Hulk encore)", 57);

	Joueur joueur21("l'homme moyen", 50);



	//EQUIPES

	Equipe equipe1("l'equipe moyenne",1);
	Equipe equipe2("les vrais joueurs de hockeys",2);
	Equipe equipe3("les joueurs de NBA perdus (mais fort)",3);
	Equipe equipe4("la classe + la maman a Baldi", 4);
	Equipe equipe5("AVENGERS",5);


	//MERCATO


	equipe1.Engager(joueur21);

	equipe2.Engager(joueur1);
	equipe2.Engager(joueur2);
	equipe2.Engager(joueur3);
	equipe2.Engager(joueur4);
	equipe2.Engager(joueur5);

	equipe3.Engager(joueur6);
	equipe3.Engager(joueur7);
	equipe3.Engager(joueur8);
	equipe3.Engager(joueur9);
	equipe3.Engager(joueur10);

	equipe4.Engager(joueur11);
	equipe4.Engager(joueur12);
	equipe4.Engager(joueur13);
	equipe4.Engager(joueur14);
	equipe4.Engager(joueur15);

	equipe5.Engager(joueur16);
	equipe5.Engager(joueur17);
	equipe5.Engager(joueur18);
	equipe5.Engager(joueur19);
	equipe5.Engager(joueur20);


    equipe1.Afficher();
	equipe2.Afficher();
	equipe3.Afficher();
	equipe4.Afficher();
	equipe5.Afficher();

	//DEBUT CHAMPIONNAT

	int nbDeLieu =6;

	string tabLieu[nbDeLieu];

	tabLieu[0]="Chez Baldi";
    tabLieu[1]="a la pati";
    tabLieu[2]="au terrain de foot";
    tabLieu[3]="rdv piscine";
    tabLieu[4]="Tavannes";
    tabLieu[5]="Tramelan";


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
