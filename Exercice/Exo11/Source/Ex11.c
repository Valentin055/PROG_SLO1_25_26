// Canevas Ex11 SLO1 SL121_LOGA 

#include <stdio.h>


// Fonction fDivInt
int fDivInt(int ValA_dividende, int ValA_diviseur, int* ptrReste)
{
	int result = 0;
	
	if (ValA_diviseur == 0)
	{
		
	}
	else
	{
		result  = ValA_dividende / ValA_diviseur;
		*ptrReste = ValA_dividende % ValA_diviseur;
	}
	return result;
}

// Fonction Extract
int Extract(int ValB, short int unite, short int* ptrDizaine, short int* ptrCentaine)
{
	//variable local
	int diz;

	unite = ValB % 10;
	diz = ValB / 10;
	*ptrDizaine = diz % 10;
	*ptrCentaine = ValB;

	return unite;
}

int main (void)
{
	char UserAnswer;
	int Reste;
	// Variables pour test A
	int ValA_dividende, ValA_diviseur;
	// Variables pour test B
	int ValB;
	short int unite = 0;
	short int Dizaine, Centaine;

	// Invite exercice 11
	printf("EX11 Prenom Nom  \n");
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez le dividende \n");
				scanf_s("%d%*c", &ValA_dividende);
				printf("TestA: entrez le diviseur  \n");
				scanf_s("%d%*c", &ValA_diviseur);
				// suite TestA à introduire ICI
				if (ValA_diviseur != 0)
				{
					int quotient = fDivInt(ValA_dividende, ValA_diviseur, &Reste);
					printf("Resultat de %d / %d = %d, reste = %d \n", ValA_dividende, ValA_diviseur, quotient, Reste);
				}
				else
				{
					printf("ne peut pas diviser par 0\n ");
				}
		break;

			case 'B':
			case 'b':
				printf("TestB: entrez un nombre de 0  a 999 \n");
				scanf_s("%d%*c", &ValB);
				if (ValB <= 999)
				{
					// suite TestB à introduire ICI
					unite = Extract(ValB, unite, &Dizaine, &Centaine);
					printf(" %d centaines = %d dizaine = %d unite \n", Centaine, Dizaine, unite);
				}
				else
				{
					printf("VaB limitee a 999 \n");
				}
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}