#include "stdafx.h"
#include "Boutique.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


Boutique::Boutique()
{
	srand(time(NULL));
	GenererCyborgs();
	GenererImplants();
}


Boutique::~Boutique()
{
}

void Boutique::GenererCyborgs() 
{
	for (int i = 0;i < 25;i++) 
	{
		int randomiseur1 = (rand() % 101), randomiseur2 = (rand() % 101), randomiseur3 = (rand() % 101);
		listeCyborgs.push_back(new Cyborg(i, randomiseur1, randomiseur2, randomiseur3));
	}
		
		
}

void Boutique::GenererImplants()
{
	for (int i = 0;i < 5;i++)
		listeImplants.push_back(new Implant());
}

void Boutique::AfficherCyborgs() 
{
	list<Cyborg*>::iterator it;
	for (it = listeCyborgs.begin(); it != listeCyborgs.end(); it++)
	{
		(*it)->getBilan();
	}
}

void Boutique::AfficherImplants()
{
	list<Implant*>::iterator it;
	for (it = listeImplants.begin(); it != listeImplants.end(); it++)
	{
		(*it)->getBilan();
	}
}

int Boutique::SavoirPrix(int choix) 
{
	list<Cyborg*>::iterator it= listeCyborgs.begin();
	std::advance(it, choix - 1);
	return (*it)->getPrix();
}
