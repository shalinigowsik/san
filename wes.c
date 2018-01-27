#include<stdio.h>
    int main()
    {
    int h1,m1,h2,m2,s1,s2;
    scanf("%d\t%d",&h1,&m1);
    scanf("%d\t%d",&h2,&m2);
    s1=h1-h2;
    s2=m1-m2;
    printf("%d\t%d",s1,s2);
    return 0;
    }
