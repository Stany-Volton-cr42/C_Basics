#include<stdio.h>

int main(){
    float cel, far;
    printf("enter the value of celcious ",cel);
    scanf("%f",&cel);
    far =  (cel * 9/5) + 32;
    printf("the value of celcious to faranite is %f ",far);
    return 0;
}