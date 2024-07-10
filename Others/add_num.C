#include <stdio.h>
int main(){
    int n;
    printf("Enter the range to add multiple of 2: ",n);
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <=n; i++){
        sum = sum + (i*2);
    }
printf("The sum of the numbers 2, 4, 6, 8 to n: %d",sum);
}