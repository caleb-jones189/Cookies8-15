#include <stdio.h>
#include <math.h>

int stringToInt(char[]);

int main()
{

	char  string[10];
	printf("Please type an integer:\n ");
	scanf("%s",&string);

	int intString= stringToInt(string);
	printf("Converted integer is %d\n",intString);
	getchar();
	char string2[10];
	printf("Please type an integer:\n ");
	scanf("%s",&string2);

	int intString2=stringToInt(string2);
	printf("Converted integer is %d\n",intString2);

	return 0;
}

int stringToInt(char c[])
{
	int negative=0;
	int length=0;
	int current;
	int total;

	while(c[length]!='\0')
		length++;

	if(c[0]=='-')
	{
		negative=1;
		length+=1;
	}


	for(int i=0;i<length;i++)
	{
		if(c[i]=='1')
			current=1;
		else if(c[i]=='2')
			current=2;
		else if(c[i]=='3')
			current=3;
		else if(c[i]=='4')
			current=4;
		else if(c[i]=='5')
			current=5;
		else if(c[i]=='6')
			current=6;
		else if(c[i]=='7')
			current=7;
		else if(c[i]=='8')
			current=8;
		else if(c[i]=='9')
			current=9;
		else
			current=0;

		if(negative==0)
			total+=(current*pow(10,length-(i+1)));
		else
			total-=(current*pow(10,length-(i+2)));
	}

	return total;
}
