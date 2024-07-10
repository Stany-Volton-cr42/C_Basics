#include <stdio.h>

int main()
{
    int radius;
    const float pi = 3.14;
    printf("enter the radious of circle ", radius);
    scanf("%d", &radius);
    printf("The value of circle is %f", pi * radius * radius);
    return 0;
}