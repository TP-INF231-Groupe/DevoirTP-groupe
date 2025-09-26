#include <stdio.h>

int main() {
    int vecteur[2], matrice[2][3], resultat[3] = {0};

    printf("Entrez les 2 composantes du vecteur:\n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &vecteur[i]);
    }
    printf("Entrez les éléments de la matrice (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }
    // Multiplication (vecteur 1x2 * matrice 2x3 = vecteur 1x3)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            resultat[j] += vecteur[i] * matrice[j][i];
        }
    }
    printf("Le resultat du produit est:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", resultat[i]);
    }
    return 0;   
}