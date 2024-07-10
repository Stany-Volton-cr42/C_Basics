#include <stdio.h>
// intiger value is not able to store the float so it give wrong result according to float.
int main(){
    int a = 3.0/9;
    float b = 3.0/9;
    printf("result is A is %d \n",a);
    printf("result of B is %f",b);
    return 0;
}