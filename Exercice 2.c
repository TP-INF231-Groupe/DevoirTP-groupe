#inlude <stdio.h>
int main() {
    int m,p,n ;
    scanf("%d %d %d", &m, &p, &n);
    int A[m][p], B[p][n], C[m][n];
    int i, j, k;
    // lecture A
    for (i=0; i<m; i++) 
        for (j=0; j<p; j++)
            scanf("%d", &A[i][j]);
    // lecture B
    for (i=0; i<p; i++)
        for (j=0; j<n; j++)
            scanf("%d", &B[i][j]);
        //initialiser C a 0
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            C[i][j] = 0;    
    //Multiplication
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            for (k=0; k<p; k++)
                C[i][j] += A[i][k] * B[k][j];
    // Affichage
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}