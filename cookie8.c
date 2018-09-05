#include <stdio.h>
#include <math.h>

int fact(int);

int main()
{

	int x;
	int n=0;
	double total=0;
	double added;

	printf("Enter x: ");
	scanf("%d",&x); 


	do
	{

		added=(pow(x,n))/(fact(n));
		total+=added;
		n++;

	}while( added>.0000000010);
	
	printf("E^%d is %lf",x,total);


	return 0;
}
int  fact(int num)
{
	int total=num;
	int down=total-1;


	for(int i=down;i>1;i--)
	{
		
		total*=i;
	}

	if(num==0)
		total=1;
	return total;

}
