#include<stdio.h>

void store(){
    static int a= 3;
    static int b = 34;
    printf("the value of a is %d \n " ,a );
    printf("the value of b is %d \n ",b );
    a++;
    b++;

}
int main(){
    int i;
    for ( i = 0; i < 3; i++)
    {
    store(); /* code */
    }   
}