//-----------------------------------------------------------------------------------//
// Nom du projet 		: demoVMD
// Nom du fichier 		: ConversionPerso.c
// Date de création 	: 03.11.2025
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
#define _USE_MATH_DEFINES
//librairie standart
#include <math.h>
#include <correct_math_defines.h>

//librairie perso
#include "Conversion.h"

//fonction
//nom fct : CalculPerimetreCercle
//paramètre entrée : rayon_m (reel)
//paramètre sortie : perimetre_m (reel)
//paramètre IN-OUT : -
//description	   : calculer le perimètre d'un cercle

float CalculPerimetreCercle(float rayon_m)
{   //déclaration cst
	const float DEUX_PI = 2 * M_PI;
	//déclaraton variable
	float perimetre_m;

	//calcul perimetre

	perimetre_m = DEUX_PI * rayon_m;

	//retour perimetre

	return perimetre_m;  //return(perimetre_m) fonctionne aussi

}





