#include "stdafx.h"
#include "Cyborg.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


Cyborg::Cyborg(int _numero,int _force,int _vitesse,int _defense)
{
	srand(time(NULL));

	numero = _numero;
	force = (rand() % 101);
	vitesse = (rand() % 101);
	defense = (rand() % 101);
	caractSpe = new Caracteristique();
	prix = ((force+1) * 100) + ((vitesse+1) * 20) + ((defense+1) * 50);
}


Cyborg::~Cyborg()
{

}
void Cyborg::getBilan() 
{
	cout << "___________________________________________________________________________" << endl;
	cout << "CYBORGE NUMERO : " << numero << endl;
	cout << "force : " << force << " | vitesse : " << vitesse << " | defense : " << defense << endl;
	cout << "                     CARACTERISTIQUE SPECIAL" << endl;
	caractSpe->getBilan();
	cout << "PRIX : " << prix << endl;
	cout << "_________________________________________________________________________" << endl;
}
