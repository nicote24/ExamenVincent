
#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
using namespace std;
class Caracteristique
{
public:
	Caracteristique();
	~Caracteristique();
	void getBilan();

private:
	string pouvoir;
	string nom;
};

