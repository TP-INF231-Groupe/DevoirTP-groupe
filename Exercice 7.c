#include <stdio.h>
int main() {
    int tab[5], i, temp;

    printf("Entrez 5 entiers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &tab[i]);
    }   
    // Inversion des éléments
    for (i = 0; i < 5 / 2; i++) {
        temp = tab[i];
        tab[i] = tab[4 - i];
        tab[4 - i] = temp;
    }
    printf("Tableau inversé:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }                   
    return 0;       
}   