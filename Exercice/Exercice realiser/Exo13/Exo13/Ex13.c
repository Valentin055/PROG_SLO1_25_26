// Solution Ex11 SL121_LOGA  C. HUBER 
// Sert de canevas pour l'Ex13
// Il faut transformer les fonctions et leur utilisation
// en utilisant des structures !!

#include <stdio.h>

typedef struct {
	int dividende;
	int diviseur;
} S_ParamA;

typedef struct {
	int reste;
	int resteDIV;
} S_ResA;

// test B
typedef struct {
	int nombre;
	short int unites;
	short int dizaines;
	short int centaines;
} S_TestB;


// Fonction fDivInt
S_ResA fDivInt(S_ParamA ParA)
{
	S_ResA Reslutat;
	Reslutat.resteDIV = ParA.dividende % ParA.diviseur;
	Reslutat.reste = ParA.dividende / ParA.diviseur;
	return Reslutat;
}  // fDivInt

// Fonction Extract
S_TestB Extract(S_TestB pData)
{
	pData.centaines = (pData.nombre / 100);
	int reste = pData.nombre % 100;
	pData.dizaines = reste / 10;
	pData.unites = reste % 10;
	return (pData);
}  // Extract


int main (void)
{
	char UserAnswer;
	// Variables pour test A
	S_ParamA  Input_A;
	S_ResA  Output_A;
	
	int ValA_dividende, ValA_diviseur;
	
	// Variables pour test B$
	S_TestB Input_B;
	S_TestB Output_B;
	short int ValB;
	

	printf("Ex13 Valentin Mermoud \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le dividende  \n");
				scanf_s("%d%*c", &ValA_dividende);
				printf("TestA: entrez le diviseur  \n");
				scanf_s("%d%*c", &ValA_diviseur);
				
				// test si diviseur est non nul
				if (ValA_diviseur != 0 ) 
				{
					Input_A.dividende = ValA_dividende;
					Input_A.diviseur = ValA_diviseur;

					Output_A = fDivInt(Input_A);

					printf ("Resultat de %d /  %d =  %d, reste = %d \n", ValA_dividende, ValA_diviseur, Output_A.resteDIV, Output_A.reste);
				}
				else
				{
					printf ("TestA : erreur division par 0 ! \n");
				}
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de 0  a 999 \n");
				scanf_s("%d%*c", &ValB);
				// suite TestB à introduire ICI

				if (ValB > 999)
				{
					ValB = 999;
					printf ("ValB limitee a %d \n", ValB); 
				}
				else
				{
					Input_B.nombre = ValB;
					Output_B = Extract(Input_B);
					printf("ValB = %d centaine = % d dizaine = %d unite = %d \n", ValB, Output_B.centaines, Output_B.dizaines, Output_B.unites);
				}
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}