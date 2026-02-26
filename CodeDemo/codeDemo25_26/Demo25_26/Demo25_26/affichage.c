//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: affichage.c
// Date de création 	: 08.12.2025
// Date de modification : xx.xx.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour SLO1 25-26
//
// Remarques			: 
//----------------------------------------------------------------------------------//

//-- librairie standard --//
#include <stdio.h>

//-- librairie perso --//  
#include "interfaceUser.h"


//----------------------------------------------------------------------------------//
//-- nom fct : DemoAffichage
//-- paramètre entrée : -
//-- paramètre sortie : -
//-- paramètre IN-OUT : - 
//-- description	  : => opérateur de conversion 
//					  : %c -> caractère 
//				      : %d -> entier 
//					  : %f -> reel 
//----------------------------------------------------------------------------------//
void DemoAffichage()
{
	char version = 50; 

	//short 

	printf("\n");	// retour chariot + saut de page 

	//-- affichage d'une chaine de caractère directement --// 
	printf("DEMO SLO");

	//-- --//
	printf("%c", version); 

}


void DemoStruct(str_transistor *transistor)
{

	transistor->Vbe = 0.6; 
	
	(*transistor).gain = 120; 
}