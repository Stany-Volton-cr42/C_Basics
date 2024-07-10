// this is the code for calculate the area of the cylender
#include <stdio.h>

int main(){
    float const pi = 3.14;
    int radius , haight;
    printf("Enter the radious: ",radius);
    scanf("%d",&radius);

    printf("Enter the value of Haight: ",haight);
    scanf("%d",&haight);

    printf("Area of cylender %f",pi*(radius*radius)*haight);
    return 0;
}