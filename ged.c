#include <stdio.h>
int main() {
	int M,i,j,a[20],med,t;

	scanf("%d",&M);

	for(i=0;i<M;i++)
	{
		scanf("%d\t",&a[i]);
	}
	
	for(i=0;i<M;i++)
	printf("%d %d\n",a[i],i);
	return 0;
}
