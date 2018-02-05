#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char g[90]="green plants";
    for(i=0;g[i]!=0;i++)
    {
        if(g[i]==' ')
        count++;
    }
    printf("the no of gap between the words %d",count);
    return 0;
}
