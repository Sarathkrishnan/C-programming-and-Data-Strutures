// BUBBLE SORT
#include <stdio.h>
void showNumbers(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
}
void main()
{
    int numbers[7] = {1, 4, 5, 20, 200, 6, 8};
    int n = 7, temp;
    printf("Array Before SORT\n");
    showNumbers(numbers, 7);
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("\nArray After SORT\n");
    showNumbers(numbers, 7);
}
