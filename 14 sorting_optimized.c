/* Soring using Tournament Data structure*/
#include <stdio.h>
int maxi(int i, int j)
{
    if (i > j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
void buildtourn(tourn, n) int tourn[], n;
{
    int i;
    for (i = 2 * n - 2; i > 1; i = i - 2)
    {
        tourn[i / 2] = maxi(tourn[i], tourn[i + 1]);
    }
}

int getnext(tourn, n, min) int tourn[], n, min;
{
    int i = 2, next;
    // DONWARD COMPUTATION

    while (i <= 2 * n - 1)
    {
        if (tourn[i] > tourn[i + 1])
        {
            tourn[i] = min;
            i = 2 * i;
        }
        else
        {
            tourn[i + 1] = min;
            i = 2 * (i + 1);
        }
    }
    // UPWARD COMPUTATION
    for (i = i / 2; i > 1; i = i / 2)
    {
        if (i % 2 == 0)
        {
            tourn[i / 2] = maxi(tourn[i], tourn[i + 1]);
        }
        else
        {
            tourn[i / 2] = maxi(tourn[i], tourn[i - 1]);
        }
    }
}
int minval(int tourn[],int n)
{
    int minimam;
    minimam = tourn[0];
    for (int i = 1; i < n; i++)
    {
        if (tourn[i] < minimam)
        {
            minimam = tourn[i];
        }
    }
    return minimam;
}
void main()
{
    int tourn[100], n, i, min;
    // READ
    printf("Give n:");
    scanf("%d", &n);
    printf("\n n = %d \n", n);

    for (i = n; i < 2 * n - 1; i++)
    {
        scanf("%d", &tourn[i]);
    }

    // BUILD TOURNAMENT
    buildtourn(tourn, n);
    min = minval(tourn, n) - 1;

    // SORTIGN
    printf("\n Sorted Items are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", tourn[1]);
        getnext(tourn, n, min);
    }
    printf(" \n");
}