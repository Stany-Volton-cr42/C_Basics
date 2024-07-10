// #include <stdio.h>
// int sum()
// {
//     int a, b, c;
//     printf("Enter the frist number: ");
//     scanf("%d", &a);
//     printf("Enter the second number ");
//     scanf("%d", &b);
//     c = a + b;
//     printf("%d + %d = %d ", a, b, c);
//     return 0;

// }


#include <stdio.h>
// #include <conio.h>
int sum(int x,int y);
    main(){
        int a,b,c;
        printf("Enter the frist number: ");
        scanf("%d", &a);
        printf("Enter the second number ");
        scanf("%d", &b);
        c = sum(a,b);
        printf("%d + %d = %d ", a, b, c);
        return 0;
        int sum(int x,int y);
}   

