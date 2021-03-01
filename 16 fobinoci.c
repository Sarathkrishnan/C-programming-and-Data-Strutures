// fiboci normal
#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    printf("\n fib(%d) = %d\n", n, fib(n));
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}