#include <stdio.h>
int main(){
	int i,n,prime = 1;
	printf("Enter the number ",n);
	scanf("%d",&n);
	for (i = 2;i*i<n;i++)
	{
	if(n%i == 0){
		prime = 0;
	}
}
if(prime){
	printf("The number %d is prime \n",n);
}
else{
	printf("The number %d is not prime \n",n);
}
return 0;
}

// #include <stdio.h> //header file section
// #include <conio.h>
// int main()
// {
// char c;
// printf("Enter a character : ");
// c = getchar();
// printf("\nEntered character : %c ", c);
// return 0;
// }
