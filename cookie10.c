#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char string2[100];
	printf("Enter a series of numbers. Enter a negative number to terminate: ");
	scanf("%[^\n]s",string2);
	int length=strlen(string2);
//	printf("%d\n",length);//Gives with spaces

	char string[length+1];

	for(int i=0;i<length;i++)//COPY STRINGS OVER WITH ONE MORE LENGTH
	{
		string[i]=string2[i];
	}
	string[length+1]='\0';


	char current[10];
	int  numbers[100];
	int currentCount=0;
	int  numbersCount=0;
	length=length+1;//TO ACCOMIDATE FOR NULL CHAR
	for(int i=0;i<length;i++)
	{
		if(string[i]==' '||string[i]=='\0')//IF  SPACE OR END
		{
			int currentInt=atoi(current);
			numbers[numbersCount]=currentInt;
			memset(current,0,10);//reset current
			currentCount=0;
			numbersCount++;
				

		}

		else if(string[i]=='.')//IF DECIMAL
		{
			int notwhitespaces=0;
			int whitecounter=i;
			while(string[whitecounter+1]!=' ')
			{	
				notwhitespaces++;
				whitecounter++;
			}	

			printf("not whitespaces %d",notwhitespaces);

		}

		

		else//IF INT
		{
			current[currentCount]=string[i];
			currentCount++;
		}


		
			
	}



	double average;
	double sum=0;
	double standarddev=0;

	

	for(int i=0;i<numbersCount;i++)
	{
		sum+=numbers[i];
	}

	printf("%lf\n",sum);


	average=sum/numbersCount;

	printf("average is: %lf\n",average);

	for(int i=0;i<numbersCount;i++)
	{
		standarddev+= pow(numbers[i]-average,2);

	}

	standarddev=sqrt(standarddev/10);

	printf("standad deviation is: %lf\n",standarddev);



	return 0;
}
