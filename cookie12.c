#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[])
{
	char* string=argv[1] ;
	int counts[52];

	for(int i=0;i<52;i++)
		counts[i]=0;

	//printf("Please enter a string\n");
	//scanf("%s",string);
	
	
	int length=0;
	while(string[length]!='\0')
		length++;

	for(int i=0;i<length;i++)
	{
		if(string[i]=='a')
			counts[0]++;
		else if(string[i]=='b')
			counts[1]++;
		else if (string[i]=='c')
			counts[2]++;
		else if (string[i]=='A')
			counts[3]++;
		else if(string[i]=='B')
			counts[4]++;
		else if(string[i]=='C')
			counts[5]++;
	}

	char current='a';
	for(int i=0;i<52;i++)
	{	if(i==3)
			current='A';
		if(counts[i]!=0)
		{
			printf("%c: %d\n ",current,counts[i]);	
		}
		current++;
	}


	
	

	return 0;








}
