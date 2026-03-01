// Canevas Ex14 SL124_LOGA SLO1 2ème semestre  C. HUBER 

#include <stdio.h>

// Structure S_hms 
typedef struct {
	short int heures;
	short int minutes;
	short int secondes;
} S_hms;

// Structure S_hms_D 
typedef struct {
	int NbSec;
	short int TabHMS[3]; // [0]=S, [1]=M, [2]=H 
} S_hms_D;


// Fonction CalSec 
int CalSec(int HeuresA, int MinutesA)
{
	return (HeuresA * 3600) + (MinutesA * 60);
}

// Fonction GetHMS_B 
short int GetHMS_B(int totalSec, short int* heures, short int* minutes)
{
	*heures = (short int)(totalSec / 3600);
	*minutes = (short int)((totalSec % 3600) / 60);
	return (short int)(totalSec % 60);
}

// Fonction GetHMS_C 
S_hms GetHMS_C(int totalSec)
{
	S_hms res;
	res.heures = (short int)(totalSec / 3600);
	res.minutes = (short int)((totalSec % 3600) / 60);
	res.secondes = (short int)(totalSec % 60);
	return res;
}

// Fonction GetHMS_D 
void GetHMS_D(S_hms_D* ptrRes)
{
	int total = ptrRes->NbSec;
	ptrRes->TabHMS[2] = (short int)(total / 3600);          // Heures 
	ptrRes->TabHMS[1] = (short int)((total % 3600) / 60);   // Minutes 
	ptrRes->TabHMS[0] = (short int)(total % 60);            // Secondes 
}


int main(void)
{
	char UserAnswer;
	// Variables pour test A
	int HeuresA, MinutesA, secondesA = 0;

	// Variables pour test B
	int ValB;
	short int hB, mB, sB;

	// Variables pour test C
	int ValC;
	S_hms resC;

	// Variables pour test D
	int ValD;
	S_hms_D ResD;


	printf("Ex14 Valentin Mermoud \n"); 

	do {
		printf("Test A, B, C ou D, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);

		switch (UserAnswer) {
		case 'A':
		case 'a':
			printf("TestA: entrez le nb d'heures  \n");
			scanf_s("%d%*c", &HeuresA);
			printf("TestA: entrez le nb de minutes  \n");
			scanf_s("%d%*c", &MinutesA);
			// Suite TestA 
			secondesA = CalSec(HeuresA, MinutesA);
			printf("TestA: Heures = %d Minutes = %d Nb secondes = %d \n", HeuresA, MinutesA, secondesA);
			break;

		case 'B':
		case 'b':
			printf("TestB: entrez un nombre de secondes \n");
			scanf_s("%d%*c", &ValB);
			// Suite TestB
			sB = GetHMS_B(ValB, &hB, &mB);
			printf("TestB: %d sec represente %d [h] %d [m] %d [s]\n", ValB, hB, mB, sB);
			break;

		case 'C':
		case 'c':
			printf("TestC: entrez un nombre de secondes \n");
			scanf_s("%d%*c", &ValC);
			// Suite TestC 
			resC = GetHMS_C(ValC);
			printf("TestC: %d sec represente %d [h] %d [m] %d [s]\n", ValC, resC.heures, resC.minutes, resC.secondes);
			break;

		case 'D':
		case 'd':
			printf("TestD: entrez un nombre de secondes \n");
			scanf_s("%d%*c", &ValD);
			// Suite TestD 
			ResD.NbSec = ValD;
			GetHMS_D(&ResD);
			printf("TestD: %d sec represente %d [h] %d [m] %d [s]\n", ResD.NbSec, ResD.TabHMS[2], ResD.TabHMS[1], ResD.TabHMS[0]);
			break;
		} 

	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}