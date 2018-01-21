#include <stdio.h>
int main()
{
	char ch;
	printf("enter any number");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("entered character is vowel");
	}
	else
	{
		printf("entered character is constant");
	}
	return 0;
}	
