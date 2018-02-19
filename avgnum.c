#include<stdio.h>
int main()
{
int a[10],n,i,sum=0,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
b=sum/n;
}
printf("%d",b);
return 0;
}
