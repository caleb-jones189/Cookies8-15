#include <stdio.h>
#include <string.h>


int main (int argc,char* argv[])
{
	char* fileName=argv[1];

	FILE* file =fopen(fileName,"r");
	char string[300];


	while(fgets(string,300,(FILE*)file))
	{
		int gallons;
		double miles;
		char current[10];
		int numbers[10];
		int currentCount=0;
		int numbersCount=0;
		//MPG is gallons/miles
		

		for(int i=0;i<strlen(string);i++)
		{
			if(string[i]==' ')
			{
				int currentInt=atoi(current);
				numbers[numbersCount]=currentInt;
				memset(current,0,10);//reset current
				currentCount=0;
				numbersCount++;
			}
			else if (string[i]=='\n')
			{
				//DO NOTHING

			}
			else//FOR NUMBERS
			{
				current[currentCount]=string[i];
				currentCount++;

			}


		}

		for(int i=0;i<numbersCount;i++)
		{
			printf("%d",numbers[i])
		}




	}//for the while

			



	


	


	return 0;
}
