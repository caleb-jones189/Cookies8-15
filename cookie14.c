#include <stdio.h>
#include<string.h>
#include<string.h>
int main(int argc, char* arg[])
{
	char* fileName=arg[1];
	
	FILE* file=fopen(fileName,"r");

	char string[300];
	int  values[20];
	int newLineNumber=0;
	int valNumber=0;
	int total=0;

	while(fgets(string,300,(FILE*)file))
	{

	
	
	
				
	
		printf("%s",string);//this work
		
		
		for(int i=0;i<strlen(string);i++)
		if(string[i]!=' '||string[i]!='\n'||string[i]!='\0')
		{
			total=(string[i]-'0');
			values[valNumber]=total;
			valNumber++;
			printf("%d",total);
		}


		//for(int i=0;i<valNumber;i++)
		//printf("%d",values[i]);
		
		
/*
		for(int i=0;i<strlen(string);i++)
		{
			 total+=atoi(string[i]);
			printf("%d",total);

		}
		
		values[valNumber]=total;
		valNumber++;

*/
	
	}
/*		
	for(int i=0;i<valNumber;i++)
	{
		printf("%d",values[i]);
	}
		
	
	int count=0;
	for(int i=0;i<3000;i++)
		if(string[i]=='\n')
		{
			newLineNumber=i;
			values[count]=' ';
			//calculate total

		}
		else if(string[i]==' ')
			i++;
		else if(string[i]!=' ')
		{
			values[count]=string[i];
			count++;
		}

	printf("%s",values);//temp end to while
	

	

	fclose(file);
	

	int length=strlen(values)-1;

	
	total=0;
	int i=0;
	for(int i=0;i<length;i++)
	{
		if(values[i]!=' ')
		{
			int curVal=values[i]-'0';
			total+=curVal;
		}
	}

	printf("%d",total);
	

		
	
*/	

	return 0;
}
