#include<stdio.h>
void main()
{
int n,rem=0,res=0,rev;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
rev=n%10;
rem=rem*10+rev;
n=n/10;
}
while(rem!=0)
{
res=rem%10;
printf("%d\t",res);
rem=rem/10;
}
}
