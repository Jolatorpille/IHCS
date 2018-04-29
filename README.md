IHCS
Génie Logiciel 
Baldi Matteo, Arfa Hakim, Matthey Johan
INF2IIE-a

Ce projet consiste à simuler un championnat de Hockey.

## Installation



## Usage

1 : Instanciez au minimum 10 Joueurs (2 équipes de 5 joueurs), les Joueurs ont un nom et un niveau.
2 : Instanciez 2 Equipes, les Equipes ont un nom et un ID.
3 : Appelez la méthode engager(Joueur) pour créer vos équipes avec les joueurs que vous désirez.
	-> Si vous le désirez, vous pouvez appeler la méthode Afficher() de la classe Equipe pour afficher son nom ainsi que son effectif.
4 :	Ensuite, Instanciez un Championnat, les Championnats ont un nom.
5 : Appelez la méthode AjouterEquipe(Equipe) de la classe Championnat pour qu'elles fassent partie du Championnat.
	-> Si vous le désirez, vous pouvez appeler la méthode afficherEquipes() pour voir les Equipes inscritent au Championnat.
6 : Appelez ensuite la méthode AgenderMatch(), afin de créer le nombre de match nécessaire (Les Equipes jouent toutes les unes contre les autres).
7 : Appelez la méthode joueurMatch(Equipe.ID,Equipe.ID), afin de simuler le resultat des matchs.
8 : Appelez la méthode afficherMatchesJoues() afin de voir le résultat de chaque match ainsi que le lieu de la rencontre.
9 : Appelez la méthode afficherClassement() pour connaître le classement des Equipes dans le championnat (Victoire : 3pts, Nul : 1 pts, Défaite : 0pts).
10 : Appelez la méthode reinitialiser() pour tout remettre à zero. 
