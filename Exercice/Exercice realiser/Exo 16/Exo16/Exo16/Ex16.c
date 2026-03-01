// Ex16.c Christian HUBER 21.03.2016
// Canevas pour l'exercice 16 SL124_LOGA

#include <stdio.h>

// Définition de la structure avec champs de bits pour compresser la date sur 16 bits
struct DateBitField {
	unsigned short jour : 5;   // 5 bits pour le jour (1-31) 
	unsigned short mois : 4;   // 4 bits pour le mois (1-12) 
	unsigned short annee : 7;  // 7 bits pour l'année (0-127) 
};

// Union permettant de voir la donnée soit par champs de bits, soit comme un entier brut
union DateUnion {
	struct DateBitField bits;
	unsigned short dateCodee;
};

// ZipDate
// Cette fonction recoit une date sous forme unsigned char jour, unsigned char mois et short ans
// Elle retourne un unsigned short organisé de tel manière que l'année et codée sur 7 bits, le mois sur 4 
// et le jour sur 5 
// La valeur codée de l'année correspond à la différence à 1950 
unsigned short ZipDate(unsigned short day, unsigned short month, unsigned short year)
{
	union DateUnion tmp;

	tmp.bits.jour = day;
	tmp.bits.mois = month;
	// L'année est stockée comme la différence par rapport à 1950 
	tmp.bits.annee = (unsigned short)(year - 1950);

	return tmp.dateCodee;
}


int main(void)
{
	char  UserAnswer;
	short sortie;

	// Taille minimum = short, même avec préfixe h dans scanf
	unsigned short day, month;
	unsigned short year;
	unsigned short resultatCode;

	// Affichage du nom
	printf("Ex16 Nom Prenom \n");

	sortie = 0; // faux, reste dans la boucle
	do {
		printf("T pour test, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);

		switch (UserAnswer) {

		case 'T':
		case 't':
			// Test (Exercice champs de bit)
			printf("Entrez jour mois annee ! \n");
			scanf_s("%hd %hd %hd%*c", &day, &month, &year);

			// Appel de la fonction de compression 
			resultatCode = ZipDate(day, month, year);

			// Affichage en hexadécimal sur 4 digits comme demandé 
			printf("Date compressee en hexa %04X \n", resultatCode);
			break;

		case 'Q':
		case 'q':
			sortie = 1;
			break;
		}

	} while (sortie == 0);

	return (0);
}