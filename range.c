#include <stdio.h>
int main()
{
	int n,i,count;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	if(i==n)
	{
		count++;
	}
	}
	if(count==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
