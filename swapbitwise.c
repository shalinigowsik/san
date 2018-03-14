#include<stdio.h>
void main()
{
int a,b,f;
scanf("%d %d",&a,&b);
f=a;
a=b;
b=f;
printf("%d %d",a,b);
}
