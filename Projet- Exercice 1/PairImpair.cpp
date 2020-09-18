// But:
// Auteur: Francis Breault
// Date: 2020-09-12

#include <iostream>


void main()
{
	setlocale(LC_ALL, "");

	int nombre1;


	std::cout << " Veuillez entrer un nombre entier :";			
	std::cin >> nombre1;								//L'utilisateur entre un nombre entier
	

	if (nombre1 % 2 == 0)				// Un nombre pair est divisible par 2 KM : OUI ! et reste entier KM : Je ne comprends pas le reste du commentaire ???
							// FR : Si le nombre1 es un nombre impair, il ne resteras pas entier lorsqu'il sera divisé par 2
		// KM : Que signifie ne restera pas entier ???
	{
		std::cout << nombre1 << " est un nombre pair " << std::endl;
	}
	
	else
	{
		std::cout << nombre1 << " est un nombre impair" << std::endl;		
	}



	

	// plan de test
	// Excellent plan de tests, manque peut-être la valeur 0
	/*
	nombre1					Résultat escompté
	 514					Est un nombre pair
	-845120					Est un nombre pair
	9788					Est un nombre pair
	789						Est un nombre impair
	215						Est un nombre impair
	1050					Est un nombre pair
	987894201				Est un nombre impair
	-8452					Est un nombre pair
	*/













}
