//  SL121_LOGA canevas Ex12  C. HUBER 

#include <stdio.h>

// --- FONCTION TEST A ---
// Affiche l'indice, l'adresse (incrémentée) et la valeur de chaque élément
void ShowItems(int nbElements, double* ptr) {
    for (int i = 0; i < nbElements; i++) {
        // Affichage avec pointeur incrémenté (pas d'utilisation d'indice)
        printf("TestA : indice = %d, adresse item = 0x%p valeur item = %.2f\n",
            i, (void*)ptr, *ptr);
        ptr++; // Passage à l'élément suivant
    }
}

int main(void)
{
    char UserAnswer;

    // --- VARIABLES TEST A ---
    double TableA[10];

    // --- VARIABLES TEST B ---
    // Matrice de 16 lignes et 4 colonnes de type char
    // Initialisation directe pour représenter les valeurs binaires de 0 à 15
    char MatriceB[16][4] = {
        {0,0,0,0}, {0,0,0,1}, {0,0,1,0}, {0,0,1,1}, // 0 à 3
        {1,0,0,0}, {0,1,0,1}, {0,1,1,0}, {0,1,1,1}, // 4 à 7 (Note: correction ligne 4 selon logique binaire)
        {1,0,0,0}, {1,0,0,1}, {1,0,1,0}, {1,0,1,1}, // 8 à 11
        {1,1,0,0}, {1,1,0,1}, {1,1,1,0}, {1,1,1,1}  // 12 à 15
    };
    int ValB; // Variable pour stocker le numéro de ligne

    printf("Ex12  Mermoud Valentin \n");

    // --- INITIALISATION TEST A ---
    // Boucle variant de 10.00 à 10.09
    for (int i = 0; i < 10; i++) {
        TableA[i] = 10.00 + (i * 0.01);
    }

    do {
        printf("Test A ou B, Q pour Quitter \n");
        scanf_s("%c%*c", &UserAnswer, 2);

        switch (UserAnswer) {
        case 'A':
        case 'a':
            printf("TestA: affichage des informations de TableA \n");
            // Appel de la fonction ShowItems avec l'adresse du début du tableau
            ShowItems(10, TableA);
            break;

        case 'B':
        case 'b':
            printf("TestB: entrez le numero de ligne (max 15) \n");
            scanf_s("%d%*c", &ValB);

            // Limiter ValB à 15
            if (ValB > 15) ValB = 15;
            if (ValB < 0) ValB = 0;

            // Affichage direct de la ligne sélectionnée
            // Format : TestB : No ligne = n [3]=v [2]=v [1]=v [0]=v
            printf("TestB : No ligne = %d [3]=%d [2]=%d [1]=%d [0]=%d\n",
                ValB, MatriceB[ValB][0], MatriceB[ValB][1],
                MatriceB[ValB][2], MatriceB[ValB][3]);
            break;

        } // end switch

    } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

    return (0);
}