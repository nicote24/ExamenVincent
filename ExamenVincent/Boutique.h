#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <list>
using namespace std;
#include "Cyborg.h"
#include "Implant.h"
#include "Caracteristique.h"

class Boutique
{
public:
	Boutique();
	~Boutique();

	void GenererCyborgs();
	void GenererImplants();
	void AfficherCyborgs();
	void AfficherImplants();
	int SavoirPrix(int choix);

private:
	list<Cyborg*> listeCyborgs;
	list<Implant*> listeImplants;
};

