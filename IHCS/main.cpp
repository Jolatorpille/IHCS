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

	Joueur j1("Crosby", 96);
	Joueur j2("Kane", 95);
	Joueur j3("Ovechkin", 94);
	Joueur j4("Brodeur", 97);
	Joueur j5("McDavid", 98);

	Joueur j6("Kopitar", 93);
	Joueur j7("Daughty", 90);
	Joueur j8("Carter", 85);
	Joueur j9("Quick", 92);
	Joueur j10("Kempe", 88);

	Joueur j11("Merkel",0);
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

	Equipe equipe1("POWER RANGERS",1);
	Equipe equipe2("LA KINGS",2);
	Equipe equipe3("DICTATOR",3);
	Equipe equipe4("REPLTILIEN", 4);


	//MERCATO


	equipe1.Engager(j1);
	equipe1.Engager(j2);
	equipe1.Engager(j3);
	equipe1.Engager(j4);
	equipe1.Engager(j5);

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

	//DEBUT CHAMPIONNAT


	Championnat chpt1("IHCS");

	chpt1.AjouterEquipe(equipe1);
	chpt1.AjouterEquipe(equipe2);
	chpt1.AjouterEquipe(equipe3);
	chpt1.AjouterEquipe(equipe4);


	//LISTE D'EQUIPES INSCRITES


	chpt1.afficherEquipes();


	//CALENDRIER DES MATCHES

	chpt1.AgenderMatch();


	//SIMULER MATCH


	chpt1.jouerMatch(equipe1.ID,equipe2.ID);
	chpt1.jouerMatch(equipe1.ID,equipe3.ID);
	chpt1.jouerMatch(equipe1.ID,equipe4.ID);
	chpt1.jouerMatch(equipe2.ID,equipe3.ID);
	chpt1.jouerMatch(equipe2.ID,equipe4.ID);
	chpt1.jouerMatch(equipe3.ID,equipe4.ID);


	//RESULTAT DES MATCHES


	chpt1.AfficherMatchesJoues();


	//EFFACER EQUIPE DU CHAMPIONNAT


	chpt1.reinitialiser();







    return 0;
}
