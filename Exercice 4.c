#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int produit = 0;
    for (int i = 0; i < b; i++) {
        produit += a;
    }
    printf("Produit=%d\n", produit);
    return 0;
}