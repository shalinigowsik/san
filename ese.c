#include<stdio.h>
void main()
{
int i,j,m,a=[10],b,k;
scanf("%d",&m);
for(i=1;i<=m;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=m;j++)
{
for(k=j+1;k<=m;k++)
{
if(a[j]>=a[k])
{
b=a[j];
a[j]=a[k];
a[k]=b;
}
}
}
printf("%d",b);
}
