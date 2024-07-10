#include <stdio.h>
int main(){
	int i;
	for(i = 1;i<=10;i++)
		{
		if (i==5){ // if we are using break we only use == as sign
			break;
		}
		printf("the value of i is  %d \n",i);
		}
	printf("we are outside the loop");
	return 0;
}

// #include <stdio.h>
// int main(){
// 	int i,n = 4;
// 	for (i =10;i>=1;--i){
// 		printf("%d  * %d  = %d \n",n,i,i*n);
// 	}
// return 0;
// }

