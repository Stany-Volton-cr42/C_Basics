// #include <stdio.h>

// int main()
// {
//     int a = 32;
//     int b = 16;
//     int *ptr1 = &a;
//     int *ptr2 = &b;

//     int result = *ptr1 - *ptr2;
//     printf("The subtraction result is %d\n", result);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int difference = *ptr1 - *ptr2;

    printf("The difference between the two pointers is: %u\n", difference);

    return 0;
}
