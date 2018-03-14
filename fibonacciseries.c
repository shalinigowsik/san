#include<stdio.h>
void main()
{
int n,n1=1,n2=1,f,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",n1);
f=n1+n2;
n1=n2;
n2=f;
}
}
