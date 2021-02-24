#include <stdio.h>
int gcd(int x, int y)
{
    int temp;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    while (x%y!=0)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    return y;
    
}
void main()
{
    int x, y, cd;
    printf("Enter the two numbers :");
    scanf("%d%d", &x, &y);
    cd = gcd(x, y);
    printf("GCD is : %d",cd);
}

