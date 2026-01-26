//-----------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: interfaceUser.h
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

#ifndef INTERFACE_USER_H
#define INTERFACE_USER_H


//-- structure gloabale --//
typedef struct
{
	int gain; 
	double Vbe; 
	short courant[2];   
}str_transistor;




//-- prototypes --// 
void DemoAffichage(); 


void DemoStruct(str_transistor *tansistor); 



#endif // !INTERFACE_USER_H

