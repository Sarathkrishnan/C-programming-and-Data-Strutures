#include<stdio.h>
void main()
{
	int array[100], length, temp;
	printf("How many number want to input : ");
	scanf("%d",&length);
	
	/* input array*/
	for(int i=0; i<length; i++)
	{
		scanf("%d",&array[i]);
	}

	/* Sort array */

	for(int i=0; i<length; i++)
	{
		for(int j=i+1; j<length; j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}

	}

	/* PRINT SORTED ARRAY */
	 for( int i=0; i<length; i++) printf("%d ", array[i]);


}

