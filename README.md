Génie Logiciel  
Baldi Matteo, Arfa Hakim, Matthey Johan  
INF2IIE-a  

## IHCS

Ce projet consiste à simuler un championnat de Hockey.

## Installation

L'IDE Code Blocks suffit pour compiler le projet.



## Usage

1.	Instanciez au minimum 10 Joueurs (2 équipes de 5 joueurs), les Joueurs ont un nom et un niveau.
2.	Instanciez 2 Equipes, les Equipes ont un nom et un ID.
3.	Appelez la méthode engager(Joueur) pour créer vos Equipes avec les Joueurs que vous désirez.
4.	Si vous le désirez, vous pouvez appeler la méthode Afficher() de la classe Equipe pour afficher son nom, son effectif ainsi que le niveau.
5.	Vous avez la possibilité de créer votre propre tableau de lieu. Dans ce cas, il vous faut instancier un Championnat avec un nom, le nom du tableau ainsi que sa taille. 
6.	Sinon vous pouvez instanciez un Championnat sans vous préoccupez des lieus. Il suffit de donner un nom au Championnat
7.	Appelez la méthode AjouterEquipe(Equipe) de la classe Championnat pour qu'elles fassent partie du Championnat.
8.	Si vous le désirez, vous pouvez appeler la méthode afficherEquipes() pour voir les Equipes inscritent au Championnat.
9.	Appelez ensuite la méthode AgenderMatch(), afin de créer le nombre de match nécessaire (Les Equipes jouent toutes les unes contre les autres).
10.	Appelez la méthode joueurMatch(Equipe.ID,Equipe.ID), afin de simuler le resultat des matchs.
11.	Appelez la méthode afficherMatchesJoues() afin de voir le résultat de chaque match ainsi que le lieu de la rencontre.
12.	Appelez la méthode afficherClassement() pour connaître le classement des Equipes dans le championnat (Victoire : 3pts, Nul : 1 pts, Défaite : 0pts).
13.	Appelez la méthode finChampionnat(), cette méthode remet les tout les scores du Championnat à zéro. Le palmares de l'équipe victorieuse sera alors mis à jour.
14.	On peut alors alors afficher le palmares, le nom du dernier tournoi sera inscrit au vainqueur.
15.	Appelez la méthode reinitialiser() pour tout remettre à zero. 
