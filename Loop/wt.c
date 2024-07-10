#include <stdio.h>

int main(){
    int num,i,sum = 0;
    printf("Enter the number ",num);
    scanf("%d",&num);
    for ( i = 1; i <=10; ++i)
    {
        printf("\nthe %d * %d = %d",num,i,num*i);
        sum = sum + num*i;
    }
printf("\n the sum is %d",sum);    
    return 0;
}