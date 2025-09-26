#include <stdio.h>
int main() {
    int n, x;
    scanf("%d",&n);
    int tab[n];
    for (int i=0; i<n; i++)
        scanf("%d", &tab[i]);
    scanf("%d", &x);

    int pos = -1;
    for (int i=0; i<n; i++) {
        if (tab[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        printf("Element found at position: %d\n", pos);
    } else {
        printf("Element not found\n");
    }

    return 0;
}