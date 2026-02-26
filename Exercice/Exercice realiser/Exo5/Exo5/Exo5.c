//
// Nom du projet : EX5
// Nom du fichier :
// Date de création : xx.xx.2016
// Date de modification : 24.11.2024
//
// Auteur : MBY (mathéo bonny)
// Correcteur : VMD (Mermoud Valentin)
//
// Description :
// Exercice Corrige par élève
//
// Remarques : lien pour la table ASCII :
// -> http://www.asciitable.com/
//
//----------------------------------------------------------------------------------//

#include <stdio.h> // pour usage printf
#include <stdint.h> // uniformation du type entier
#include <math.h>

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	int valA = 0; //gat value entrée par user
	int ChoixTest = 0; //gat value entrée par user


	while (1) 
	{
		//choix test et lecture
		printf("Choix du test, taper A ou B (majuscule) \n");
		scanf(" %c", &ChoixTest);

	if (ChoixTest == 'A')  // CHOIX DU TEST A
		{
			//valeur d'entrée 
			printf("entrez un nombre de 1 a 9 \n");
			scanf(" %d", &valA);

			
			if (valA > 9) // si plus grand que 9...
			{
				printf("ValA limitee a 9 \n");
			}
			else if(valA > 0) //si plus grand que 0
			{
				for (char i = 0; i < valA; i++)
				{
					printf("i = %d\n", i);
				}
			}
		}
		if (ChoixTest == 'B') // CHOIX DU TEST B
		{
			//affectation
			char int8Val = 125;
			unsigned char uint8Val = 125;

			for (char i = 0; i < 10; i++)
			{
				printf("int8Val = %+3d uint8Val = %+3d \n", int8Val, uint8Val);
				int8Val++;
				uint8Val++;
			}
		}
	}
}