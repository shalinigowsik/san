#include<stdio.h>
void main()
{
	int i,j,m,temp;
	int a[100];
	scanf("%d",&m);
	printf("enter the array value:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<m;i++)
		{
		for(j=i+1;j<m;j++)
		{
                         if(a[i]>a[j])
        {
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		}
		}
		}
		printf("the highest value is%d\t \nthe lowest value is%d\t",a[m-1],a[0]);
}
