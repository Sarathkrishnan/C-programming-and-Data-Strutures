#include <stdio.h>
void swap(i, j) int *i, *j;
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void main()
{
    int n, m, max, min, i, numb1, numb2;
    /*
    n   : number of elements
    m   : remaining values to compare
    max : temp maximum
    min : temp min
    numb1, numb2    : temp variables for comparison;=
    */

    /*READ N*/
    printf("Enter n:");
    scanf("%d", &n);

    /* Read First element and set as temp MAX */
    scanf("%d", &max);

    /* Copy temp MAX value to temp MIN */
    min = max;

    /* Remaining values to compare */
    m = n - 1;
    
    if (n % 2 == 0)
    {
        scanf("%d", &min);
        if (max < min)
        {
            swap(&max, &min);
        }
        m = m - 1;
    }
    for (i = 0; i < m / 2; i++)
    {
        scanf("%d%d", &numb1, &numb2);
        if (numb1 >= numb2)
        {
            if (numb1 > numb2)
            {
                max = numb1;
            }
            if (numb2 < min)
            {
                min = numb2;
            }
        }
    }
    printf("MIN : %d, MAX : %d", min, max);
}
