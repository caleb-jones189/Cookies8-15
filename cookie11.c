#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char first=',';
	int num1;
	int num2;
	char operator;
		do
		{
		char string[100];
		double total=0;
		int current;

		printf("Type your expression: \n");
		scanf("%[^\n]s",string);
		getchar();

		int length= strlen(string);


		int i=0;		
		first =string[i];

		if(first=='.')
			printf("stopped\n");

		else{
		
		i=0;
		for(i=0;i<length;i++)
		if(string[i]!=' ')	
		{
       			num1=string[i]-'0';
			break;
		}
		i++;

		current=i;

		for(i=current;i<length;i++)
		if(string[i]!=' ')
		{
			operator=string[i];
			break;
		}
		i++;
		current=i;

		for(i=current;i<length;i++)
		if(string[i]!=' ')
		{
			num2=string[i]-'0';
			break;
		}




		if(operator=='+')
			total=num1+num2;
		else if(operator=='-')
			total=num1-num2;
		else if(operator=='*')
			total=num1*num2;
		else if (operator=='/')
			total=(double)num1/num2;
		else if(operator=='^')
			total=pow(num1,num2);
		else 
			printf("Incorrect Input");

		printf("%.1f\n",total);
	
		}
	}while(first!='.');
	

	return 0;
}
