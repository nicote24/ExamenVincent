#include "stdafx.h"
#include "Caracteristique.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

string const tabNom[] = { "cyborge de feu", "cyborge ralentisseur", "cyborge froceur","cyborge rapido","cyborge courageux","cyborge intimidant","cyborge empoisonné ","cyborge bourrin","cyborge trop toff","cyborge faible" };
string const tabPouvoir[] = { "renvois des dommage a lattaquant", "reduit la vitesse ennemi", "reduit la force ennemie","vous rend plus rapide sur une courte duree","vous donne du courage","effraie lennemie ","empoissone lennemie ","penetre nimporte quelle armure,","vous devenez invinsible quelques secondes","vous mourrez" };

Caracteristique::Caracteristique()
{
	srand(time(NULL));
	int randomiseur = rand() % tabNom->size();
	nom = tabNom[randomiseur];
	pouvoir = tabPouvoir[randomiseur];
}


Caracteristique::~Caracteristique()
{
}

void Caracteristique::getBilan() 
{
	cout << "---------------------------------------------------------" << endl;
	cout << "pourvoir du nom de " << nom << endl;
	cout << "ayasnt comme effet " << pouvoir << endl;
	cout << "-----------------------------------------------------------" << endl;
}
