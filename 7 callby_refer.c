#include <stdio.h>
void sum(int *a, int *b, int *s)

{
    *s = *a + *b;
}
void main()
{
    int a, b, s;
    a = 10;
    b = 15;
    sum(&a, &b, &s);
    printf("%d", s);
}
