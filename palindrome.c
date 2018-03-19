#include <stdio.h>
#include<string.h>
int main() {
	char b[10];
	scanf("%s",a);
	int n,i,j,c=0;
	n=strlen(b);
	for(i=0,j=n-1;i<=n/2;i++,j--)
	{
		
		if(b[i]!=b[j])
		{
			printf("not a palindrome");
			c=1;
		break;
			
		}
	}
	if(c==0)
	{
		printf("palindrome");
	}
		return 0;
}
