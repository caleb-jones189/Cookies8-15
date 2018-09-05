#include<stdio.h>

char* reverseString(const char*);


int main(int argc,char* argv[])
{
	char * string=argv[1];	
	char* reverse=reverseString(string);
	printf("%s",reverse);
	/*

	char  reverseString[length];

	char reverseString[length];

	int count=length-1;
	for(int i=0;i<length;i++)
	{
		reverseString[i]=string[count];
		count--;
		

	}
	reverseString[length]='\0';
	printf("%s",reverseString);
	*/


	return 0;
}

char*  reverseString(const char* s)
{
	int length=0;
	while(s[length]!='\0')
		length++;
	 

	int count=length-1;
	 char* rev=malloc(length);
	for(int i=0;i<length;i++)
	{
		rev[i]=s[count];
		count--;

	}
	rev[length]='\0';

	return  rev;

}


