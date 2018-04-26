#include <iostream>
#include <string>
#include "Championnat.h"
#include "Match.h"
#include "Equipe.h"
#include "Joueur.h"

using namespace std;

int main()
{
	Joueur j1 = new Joueur("Crosby", 96);
	Joueur j2 = new Joueur("Chara", 95);
	Joueur j3 = new Joueur("Ovechkin", 94);
	Joueur j4 = new Joueur("Brodeur", 97);
	Joueur j5 = new Joueur("McDavid", 98);
	Joueur j6 = new Joueur("Hector", 89);
	Joueur j7 = new Joueur("Kane", 94);
	Joueur j8 = new Joueur("Patrick", 90);
	Joueur j9 = new Joueur("Alexander", 85);
	Joueur j10 = new Joueur("Coucou", 75);
	Joueur j11 = new Joueur();
	Joueur j12 = new Joueur("AQueCoucou", 99);
	Joueur j13 = new Joueur("Dophin", 13);
	Joueur j14 = new Joueur("Adolph", 45);
	Joueur j15 = new Joueur("Trump", 66);
	Joueur j16 = new Joueur("Kopitar", 91);
	Joueur j17 = new Joueur("BobilaPointe", 56);
	Joueur j18 = new Joueur("Mäder", 1);
	Joueur j19 = new Joueur("Joker", 8);
	Joueur j20 = new Joueur("Batman", 50);
	
	Equipe equipe1 = new Equipe("CDF",1);
	Equipe equipe2 = new Equipe("Pittsburg",2);
	Equipe equipe3 = new Equipe("Aboubakar",3);
	Equipe equipe4 = new Equipe("DarkNet", 4);
	
	Match m1 = new Match("Oslo", equipe1, equipe2);
	Match m2 = new Match("Berne", equipe1, equipe3);
	Match m3 = new Match("Neuchatel", equipe1, equipe4);
	Match m4 = new Match("Saint-Imier", equipe2, equipe3);
	Match m5 = new Match("S.Pellegrino", equipe2, equipe4);
	Match m6 = new Match("Head", equipe3, equipe4);
	
	equipe1->Engager(j1);
	equipe1->Engager(j2);
	equipe1->Engager(j3);
	equipe1->Engager(j4);
	equipe1->Engager(j5);
	
	equipe2->Engager(j6);
	equipe2->Engager(j7);
	equipe2->Engager(j8);
	equipe2->Engager(j9);
	equipe2->Engager(j10);
	
	equipe3->Engager(j11);
	equipe3->Engager(j12);
	equipe3->Engager(j13);
	equipe3->Engager(j14);
	equipe3->Engager(j15);
	
	equipe4->Engager(j16);
	equipe4->Engager(j17);
	equipe4->Engager(j18);
	equipe4->Engager(j19);
	equipe4->Engager(j20);
	
	Championnat chpt1 = new Championnat("IHCS");
	
	chpt1->Ajouter(equipe1);
	chpt1->Ajouter(equipe2);
	chpt1->Ajouter(equipe3);
	chpt1->Ajouter(equipe4);
	
	chpt1->afficherEquipes();
	
	chpt1->AgenderMatch(m6);
	chpt1->AgenderMatch(m5);
	chpt1->AgenderMatch(m4);
	chpt1->AgenderMatch(m3);
	chpt1->AgenderMatch(m2);
	chpt1->AgenderMatch(m1);
	
	chpt1->jouer
	

    return 0;
}
