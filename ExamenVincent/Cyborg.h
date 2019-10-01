#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
using namespace std;
#include "Caracteristique.h"

class Cyborg
{
public:
	Cyborg(int _numero, int _force, int _vitesse, int _defense);
	~Cyborg();

	void getBilan();
	inline int getPrix()const { return prix; }

private:
	int numero;
	int force;
	int vitesse;
	int defense;
	int prix;
	Caracteristique* caractSpe = new Caracteristique();
};

