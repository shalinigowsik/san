#include<stdio.h>
void main()
{
int c,d,add;
printf("enter two numbers:\n");
scanf("%d%d",&c,&d);
add=c+d;
if(add%2==0)
{
printf("the result is even");
}
else
{
printf("the result is odd");
}
}
