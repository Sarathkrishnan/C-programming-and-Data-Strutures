// https://youtu.be/5D5ierCsAkM
/*
Tower of hanio
Recursion appllication

hints
    Towers n, A, B, C;
BASE Condition:
    (n == 1)    L={<A,B>}

INDUCTIVE Condition:
    (n>a)
        Subproblems(Decopmposition)
            L1 = TOWERS(n-1, A, C, B)
            L2 = TOWERS(A, A, B, C)
            L3 = TOWERS(n-1, C,B,A)
        
        (Recompositon)
        Final solution L= Append(L1, L2, L3)

        Function vsrisbles
            A -> from
            b -> to
            c -> via
*/

#include <stdio.h>
void towers(m, from, to, via) int m;
char from, to, via;
{
    if (m == 1)
    {
        printf("Move from %c to %c \n", from, to);
        
    }
    else
    {
        towers(m - 1, from, via, to);
        printf("Move from %c to %c \n", from, to);
        towers(m - 1, via, to, from);
    }
}
void main()
{
    int n;
    printf("Given n : ");
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
}

