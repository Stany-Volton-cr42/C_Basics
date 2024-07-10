#include <stdio.h>

int main(){
    int a;
    printf("Enter the number ",a);
    scanf("%d",&a);
    switch (a)
    {
    case 5:
        printf("This value is 2");
        break;

    case 3:
        printf("This value is Three");
        break;

    default:
        printf("The number is not valid: ");
        break;
    }
    return 0;
}