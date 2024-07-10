#include <stdio.h>

int main()
{
    int a = 32;
    int *ptr1 = &a;
    int b = 16;
    int *ptr2 = &b;

    int sub = *ptr1 + *ptr2;
    printf("The value of a and b is %d ", sub);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int a = 32;
//     int b = 16;
//     int *ptr1 = &a;
//     int *ptr2 = &b;

//     int result = ptr1 - ptr2;
//     printf("The subtraction result is %d\n", result);

//     return 0;
// }
