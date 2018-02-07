#include<stdio.h>
int main()
{
int e,s;
scanf("%d",&e);
scanf("%d",&s);
printf("values before swapping %d %d",e,s);
e=e^s;
s=e^s;
e=e^s;
printf("values after swapping %d %d",e,s);
return 0;
}
