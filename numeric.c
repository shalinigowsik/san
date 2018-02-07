#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,a;
	char ch=[100];
	printf("\nEnter character");
	scanf("%s",&ch);
	a=strlen(ch);
	for(i=0;i<a;i++)
	{
	if(ch[i]>='0'&&ch[i]<='9')
	{
	
	 count++;
} 
}
printf("\nNumeric:%d",count);
return 0;
}
