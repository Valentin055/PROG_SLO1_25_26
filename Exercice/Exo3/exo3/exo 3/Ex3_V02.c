//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 14.09.2017
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes
// -----------------------------------
const VMAX = 10000;
const VMIN = -10000;
const PI = 3.14159;

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	float surface = 226.980;
	float rayon = 8.5;
	char lettre = 'B';
	short tension = VMAX;
	int bigval = 0xBCD14E;
	// Affectations
	// ------------
	enum e_TypeFigure {cercle, ellipse, carre, rectangle, triangle} Figure = 2;
	
	// Affichages pour controle
	printf ("Tension = %d \n", tension);
 	printf("BigVal = %lx \n", bigval);
	printf ("Lettre  = %c \n", lettre);
	printf ("Figure = %d \n", Figure);
	printf ("Rayon = %8.3f Surface = %8.3f \n", rayon, surface);

  return(0);
}


/*/ exemple pour enumeration globale

//énumeration globale qui est dans le h
typedef enum {CERCLE, ELIPSE, CARRE, RECTANGLE, TRIANGLE} e_FORME;
															//c'est le type


//utilisation d'une enumeration globale
e_FORME formeGeo = RECTANGLE;





                             /*/