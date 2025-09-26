#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n], C[m][n];
    int i, j;

    // lecture A
    for (i=0; i<m; i++) 
        for (j=0; j<n; j++)
            scanf("%d", &A[i][j]);
    // lecture B
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d", &B[i][j]);
        //Somme 
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            C[i][j] = A[i][j] + B[i][j];    
    // Affichage 
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}