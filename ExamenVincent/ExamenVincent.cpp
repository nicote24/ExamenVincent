// ExamenVincent.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>;
#include "stdafx.h";
#include <string>;
using namespace std;
#include "Caracteristique.h"
#include "Cyborg.h"	
#include "Implant.h"
#include "Boutique.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
	Boutique* boutique = new Boutique();
	cout << "bienvenue dans la boutique robotique nicococo" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "VOICI NOS CYGORGS A VENDRE " << endl;
	boutique->AfficherCyborgs();
	cout << "" << endl;
	boutique->AfficherImplants();
	cout << "selectionnez un cyborg " << endl;
	int choix;
	cin >> choix;
	boutique->SavoirPrix(choix);
	cout << "etes vous sur de vouloir lacheter ? 1 - Oui" << endl;
	cin >> choix;
    return 0;
}

