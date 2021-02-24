#include<stdio.h>
void main()
{
	int n, max,input;
	printf("How many numbers want to input : ");
	scanf("%d",&n);
	printf("Enter numbers ");
	scanf("%d",&max);
	for(int i=1; i<n ;i++)
	{
		scanf("%d",&input);
		if(max<input) max=input;
	}
	printf("MAX : %d",max);
}
