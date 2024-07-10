#include <stdio.h>
int main(){
	int x,i,sum = 0;
	float avg;
	printf("Enter the number \n");
	for (i = 1; i<=10; i++)
	{
		printf("number %d: ",i);
		scanf("%d",&x);
		sum += x;

	}
	avg = sum/10;
	printf("the avg number is %f \n The sum is %d ",avg,sum);
    return 0;

}

