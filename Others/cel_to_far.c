#include <stdio.h>

int main(){
    // (0°C × 9/5) + 32 = 32°F
    int cel;
    // float far = (cel * (9.0/5.0)) + 32;
    printf("enter the value celcious: ");
    scanf("%d",&cel);
    float far = (cel * (9.0/5.0)) + 32;
    printf("Value in far %f ",far);
    return 0;
}