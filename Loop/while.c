#include <stdio.h>
int main(){
	int i,t;
	printf("Enter the Number for Table ");
	scanf("%d",&t);
	for (i = 1; i<=10; i++)
	{
		printf(" \n %d * %d = %d ",t,i,i*t);	
	}
return 0;
}