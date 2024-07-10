#include <stdio.h>
int main(){
	int x,i,sum = 0;
	printf("Enter thr number ",x);
	scanf("%d",&x);
	for (i = 1; i<=x; i++)
	{
		printf("\n %d ",i);
		sum = sum + i;	
	}
	printf("\n sum = %d ",sum);
	return 0;
}