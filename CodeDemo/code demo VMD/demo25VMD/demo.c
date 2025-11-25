//-----------------------------------------------------------------------------------//
// Nom du projet 		: demoVMD
// Nom du fichier 		: demo.c
// Date de création 	: 29.09.2025
// Date de modification : -
//
// Auteur 				: Mermoud valentin
//
// Version				: 0.1
//
// Description          : demo SLO1 25-26
//
//
// Remarques :            
//----------------------------------------------------------------------------------//
//librairie standart
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

//librairie perso
#include "Conversion.h"
//definition
#define FOIX_2 2

//déclaration prototype



//---------------------------------------
//-- programme principal => 
//-- nom fct : main
//-- paramètre entrée : -
//-- paramètre sortie : -
//-- paramètre IN-OUT : -
//-- desciption : programme principal =>
//---------------------------------------

void main()
{
	
	//constante
	const float PI_v1 = 3.14;

	// déclaration variables
	float rayon_m = 10;    //_m => metre
	float perimetre_m, perimetre3_m;
	//une instruction est composé d'opérandes (variables) et d'opérateur (signe)
	//cast => (type)variable
	perimetre_m = (float)FOIX_2 * (float)PI_v1 * rayon_m;
	
	//appel de fct
	// -> calcul perimetre cercle
	perimetre3_m = CalculPerimetreCercle(rayon_m);
	//--> printf;
	printf("%f \n%f", perimetre_m, perimetre3_m);

	//type enumération local
	enum e_machineEtat { ETAT1, ETAT2 = 20, ETAT3 }
	//                   0         20        21
	// PAR DEFAUT ETAT 1 = 0
	enum e_machineEtat mE = ETAT2;
	//type entier type booléen
	bool varS;		//1 octet
	printf("taille d'un booléen %d [o]", sizeof(mE));
	

};


//entier 
//standard     normalisé
/*char		(u)int8_t
short		(u)int16_t
int			(u)int32_t
long long	(u)int64_t
*/

//réel
//float
//double






