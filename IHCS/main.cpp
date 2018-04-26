#include <iostream>
#include <string>
#include "Championnat.h"
#include "Match.h"
#include "Equipe.h"
#include "Joueur.h"

using namespace std;

int main()
{
	Joueur j1("Crosby", 96);
	Joueur j2("Chara", 95);
	Joueur j3("Ovechkin", 94);
	Joueur j4("Brodeur", 97);
	Joueur j5("McDavid", 98);
	Joueur j6("Hector", 89);
	Joueur j7("Kane", 94);
	Joueur j8("Patrick", 90);
	Joueur j9("Alexander", 85);
	Joueur j10("Coucou", 75);
	Joueur j11("Matteo",0);
	Joueur j12("AQueCoucou", 99);
	Joueur j13("Dophin", 13);
	Joueur j14("Adolph", 45);
	Joueur j15("Trump", 66);
	Joueur j16("Kopitar", 91);
	Joueur j17("BobilaPointe", 56);
	Joueur j18("Mäder", 1);
	Joueur j19("Joker", 8);
	Joueur j20("Batman", 50);

	Equipe equipe1("Power Ranger",1);
	Equipe equipe2("Pittsburg",2);
	Equipe equipe3("Aboubakar",3);
	Equipe equipe4("DarkNet", 4);


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

//	COUT << "EQUIPE 1 : " << EQUIPE1.GETNIVEAUEQUIPE() << ENDL;
//	COUT << "EQUIPE 2 : " << EQUIPE2.GETNIVEAUEQUIPE() << ENDL;
//	COUT << "EQUIPE 3 : " << EQUIPE3.GETNIVEAUEQUIPE() << ENDL;
//	COUT << "EQUIPE 4 : " << EQUIPE4.GETNIVEAUEQUIPE() << ENDL;

	Championnat chpt1("IHCS");

	chpt1.AjouterEquipe(equipe1);
	chpt1.AjouterEquipe(equipe2);
	chpt1.AjouterEquipe(equipe3);
	chpt1.AjouterEquipe(equipe4);

	chpt1.afficherEquipes();

	chpt1.AgenderMatch();
//	chpt1.AgenderMatch(m5);
//	chpt1.AgenderMatch(m4);
//	chpt1.AgenderMatch(m3);
//	chpt1.AgenderMatch(m2);
//	chpt1.AgenderMatch(m1);

	chpt1.jouerMatch(equipe1.ID,equipe2.ID);
	chpt1.jouerMatch(equipe1.ID,equipe3.ID);
	chpt1.jouerMatch(equipe1.ID,equipe4.ID);
	chpt1.jouerMatch(equipe2.ID,equipe3.ID);
	chpt1.jouerMatch(equipe2.ID,equipe4.ID);
	chpt1.jouerMatch(equipe3.ID,equipe4.ID);

	chpt1.AfficherMatchesJoues();




    return 0;
}
