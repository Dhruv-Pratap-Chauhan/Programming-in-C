#include <stdio.h>

int main() {
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10];
    
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of Matrix A (row-wise):\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    printf("Enter elements of Matrix B (row-wise):\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    if (n != p) {
        printf("\nMatrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%5d", B[i][j]);
        printf("\n");
    }

    printf("\nProduct of A and B (Matrix C):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%5d", C[i][j]);
        printf("\n");
    }

    return 0;
}
