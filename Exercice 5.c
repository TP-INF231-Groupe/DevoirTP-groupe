#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int trié = 1;
    for (int i=0; i<n-1; i=++){
        if (tab[i] > tab[i+1]) {
            trié = 0;
            break;
        }                                                                                                                   
    }
    if (trie)
     printf("Trié\n");
    else
        printf("Pas trié\n");
    return 0;
}