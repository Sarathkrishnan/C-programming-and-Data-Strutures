#include <stdio.h>
void main()
{
    int a, b, c;
    a = 10;
    b = 45;
    c = mul(a, b);
    printf("%d*%d\t=%d",a,b,c);
}

int mul(int a, int b)
{
    int p;
    p=a*b;
    return p;
}
/*"miDebuggerArgs": "-q -ex quit; wait() { fg >/dev/null; }; /bin/gdb -q --interpreter=mi"*/