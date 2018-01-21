#include<stdio.h>
int main()
{
int i,b,c;
printf("enter the first number");
scanf("%d",b);
printf("enter the last number");
scanf("%d",c);
for(i=b;i<=c;i++)
{
if(i%2==0)
{
printf("even: %d",i);
}
}
return 0;
}
