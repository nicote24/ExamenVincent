#include "stdafx.h"
#include "Implant.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

string const tabNom[] = { "orange verte", "Briseur-dos", "Pique-bois","Poulet cuit","Mecanique general","Automne hiver","seul au monde","what tha phoque" };
string const tabCapacite[] = { "ctache du feu du membre", "Fait pleurer ladversaire", "renvois dommage a l'adveraire","bloque tout degat","teleporte quelque part","gele ladversaire","rend invisible","te donne du courage" };

Implant::Implant()
{
	srand(time(NULL));
	nom=tabNom[(rand() % tabNom->size())];
	partieCorpsModi = Corps(rand() % 4);
	rarete = Rarete(rand() % 3);
	modifApportee = tabCapacite[rand() % tabCapacite->size()];
	prix = (1000 * rarete) + (300 * partieCorpsModi);
}


Implant::~Implant()
{
}

string Implant::CorpTostring() 
{
	switch (partieCorpsModi)
	{
	case 0:return "tete";break;
	case 1:return "torse";break;
	case 2:return "jambes";break;
	case 3:return "pieds";break;
	case 4: return "jambes";break;
	}
}
string Implant::RareteTostring()
{
	switch (rarete)
	{
	case 0:return "commun";break;
	case 1:return "rare";break;
	case 2:return "legendaire";break;
	}
}

void Implant::getBilan() 
{
	
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "Nom de l'implant : " << nom << "| partie du corps modifié : " << CorpTostring() << endl;
	cout << "Modification  quelle apporte : " << modifApportee << " | raretée " << RareteTostring() << endl;
	cout << " PRIX " << prix << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl;

}
