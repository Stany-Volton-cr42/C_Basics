// Program name: add.c
// purpose: to add two number   
// Author: Vivek raj

#include <stdio.h>
#include <conio.h>
int add_sub(a,b);
int main(){

    int a = 2;
    int b = 3;
    printf("the addition of a and b %d",a+b);
    return 0;
}
int add_sub(a,b) {
    return a *b;
}

