#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
using namespace std;

class Implant
{
public:
	Implant();
	~Implant();

	void getBilan();
	string CorpTostring();
	string RareteTostring();
private:
	enum Corps{tete,torse,jambes,pieds,mains,bras };
	enum Rarete{commun,rare,legendaire};
	
	string nom;
	Corps partieCorpsModi;
	string modifApportee;
	Rarete rarete;
	int prix;


};

