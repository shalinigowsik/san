#include <stdio.h>
int main() 
{
	int n1,n2,diff;
	scanf("%d",&n1);
	scanf("%d",&n2);
	diff=n1-n2;
            if(diff%2==0)
            {
            	printf("even");
            }
            else
            {
            	printf("no");
            }
            return 0;
}
