// #include <stdio.h>

// int main(){
    
//     int a;
//     printf("Enter the number ",a);
//     scanf("%d",&a);
//     printf("this is your number %d",a);
//     getc (0);
// }
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}