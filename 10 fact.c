#include <stdio.h>

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
void main()
{
    int x, result;
    printf("Enter number :");
    scanf("%d", &x);
    result = fact(x);
    printf("fact of %d is %d \n", x, result);
}
