// Canevas Ex10  C. HUBER 

#include <stdio.h>
#include <math.h>	// pour ceil et floor


// Fonction FtestA
double FtestA(double val, double* partieFract) {
	double entiere;
	// Utilisation de floor pour obtenir le plus grand entier 
	entiere = floor(val);
	// Fournir la valeur fractionnaire via le pointeur 
	*partieFract = val - entiere;
	return entiere;
}


// Fonction Extract
unsigned short int Extract(unsigned long totalSec, unsigned short int* heures, unsigned short int* minutes) {
	// Calcul du nombre d'heures et de minutes
	*heures = (unsigned short int)(totalSec / 3600);
	*minutes = (unsigned short int)((totalSec % 3600) / 60);
	// Retourne le résidu des secondes 
	return (unsigned short int)(totalSec % 60);
}



int main(void)
{
	char UserAnswer;
	// Variables pour test A
	double ValA;
	double PartIntA, PartFractA; // Variables supplémentaires 

	// Variables pour test B
	unsigned long ValB;
	unsigned short int NbH, NbM, NbS; // Variables supplémentaires 


	printf("Ex10 Nom Prénom \n"); // Affichage unique 
	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);

		switch (UserAnswer) {
		case 'A':
		case 'a':
			printf("TestA: entrez un nombre fractionnaire \n"); // 
			scanf_s("%lf%*c", &ValA);
			// suite TestA à introduire ICI				
			PartIntA = FtestA(ValA, &PartFractA);
			printf("ValA = %g PartInt = %.0f PartFract = %g\n", ValA, PartIntA, PartFractA); // 


			break;

		case 'B':
		case 'b':
			printf("TestB: entrez un nombre de secondes \n");
			scanf_s("%lu%*c", &ValB); // Correction du format pour unsigned long
			// suite TestB à introduire ICI
			NbS = Extract(ValB, &NbH, &NbM);
			printf("ValB = %lu NbHeures = %hu NbMinutes = %hu NbSecondes = %hu\n", ValB, NbH, NbM, NbS); 


			break;

		} // end switch

	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}