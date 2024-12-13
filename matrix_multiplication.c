#include <stdio.h>
#include <conio.h>

int main()
{
    int m, n, p, i, j, k;

    // Input dimensions of matrices
    printf("Enter the number of rows of matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns of matrix A (and rows of matrix B): ");
    scanf("%d", &n);
    printf("Enter the number of columns of matrix B: ");
    scanf("%d", &p);

    // Declaration of matrices
    int A[m][n], B[n][p], C[m][p];

    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B (%d x %d):\n", n, p);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize matrix C to zero
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resultant matrix C
    printf("The resultant matrix C (%d x %d) is:\n", m, p);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
