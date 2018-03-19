#include<stdio.h>
int main()
{
	int i,n,a,b,f=0;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(n>a&&n<b)
		{
		printf("yes");
		f=1;
		break;
		}
	}
	if(f==0)
	printf("no");
	return 0;
}
