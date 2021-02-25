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
int mini(int i, int j)
{
    if (i > j)
    {
        return j;
    }
    else
    {
        return i;
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
int nextmax(tourn, n) int tourn[], n;
{
    int i = 2, next;
    next = mini(tourn[2], tourn[3]);
    while (i <= 2 * n - 1){
        if (tourn[i] > tourn[i + 1]){
            next = maxi(tourn[i + 1], next);
            i = 2 * i;
        }
        else{
            next = maxi(tourn[i], next);
            i = 2 * (i + 1);
        }
    }
    return (next);
}
void main()
{
    int tourn[100], n, i;
    printf("How many number want to input : ");
    scanf("%d", &n);
    for (i = n; i <= 2 * n - 1; i++)
    {
        scanf("%d", &tourn[i]);
    }
    buildtourn(tourn, n);
    printf("\n MAX = %d \n", tourn[1]);
    printf("\n NEXTMAX = %d \n", nextmax(tourn, n));
}
