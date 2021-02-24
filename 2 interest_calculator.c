#include <stdio.h>

#define PERIOD 2
#define PRINCIPAL 5000

void main(){
    int year;
    float amount,value,inrate;

    amount=PRINCIPAL;
    inrate=0.11;
    year=0;

    while (year<=PERIOD)
    {
        printf("%2d\t%8.2f\n",year,amount);
        value=amount+inrate*amount;
        year++;
        amount=value;
    }
    
}