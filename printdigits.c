#include<stdio.h>
void main()
{
int m,a=0,i,b;
scanf("%d",&m);
for(i=0;i<m;i++)
{
while(m!=0)
{
b=m%10;
a=a+b;
m=m/10;
}
printf("%d",a);
}
}
