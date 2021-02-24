/* Squre root of quatratic equation */

#include<stdio.h>
#include<math.h>

void main()
{
	float a, b, c, y, root_of_y, twotimes_a, x1, x2;
	printf("Enter value of a\t:");
	scanf("%f",&a);
	printf("Enter value of  b\t:");
	scanf("%f",&b);
	printf("Enter value of c\t:");
	scanf("%f",&c);

	y=b*b-4*a*c;
	
	
	if(y==0)
	{
		printf("Only one root exist\n");
		x1=-b/(2*a);
		printf("Root is : %f",x1);
	}
	else if(y<0)
	{
		printf("Complex root exist\n");
	}
	else
	{
		printf(" Two roots exist\n");
        root_of_y=sqrt(y);
        twotimes_a=2*a;
		x1=(-b+ root_of_y)/twotimes_a;
		x2=(-b- root_of_y)/twotimes_a;
		printf("Root 1 : %f, Root 2 : %f\n",x1,x2);
	}


}
