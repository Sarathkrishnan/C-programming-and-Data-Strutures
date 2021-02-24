#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, o;

    printf("Enter 'm' 'n' 'o' :");
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &o);

    /* Input First matrix*/
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    /* Input Second matrix*/
    for (int i = 0; i < n; i++)
        for (int j = 0; j < o; j++)
            scanf("%d", &b[i][j]);

    // Multiplication
    for (int i = 0; i < m; i++)
        for (int j = 0; j < o; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += (a[i][k] * b[k][i]);
            }
            c[i][j] = sum;
        }
    // solution
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    fflush(stdin);
}
