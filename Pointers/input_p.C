// #include <stdio.h>

// int main()
// {
//     int marks[4];
//     int *ptr;
//     ptr = &marks[0];

//     for (int i = 0; i <4; i++){
//         printf("Enter the Marks of student %d ", i+1);
//         scanf("%d",ptr);
//         ptr++;
//     }
    
// for (int i = 0; i <4; i++){
//     printf("The value of marks for student %d is %d \n", i+1,marks[i]);
// }

//     return 0;
// }

#include<stdio.h>
int main(){
    int x=10;
    int*ptr = &x;
    printf("%d \n",x);
    printf("%d \n",&x);
    printf("%d \n",ptr);
    printf("%d \n",&ptr);
    return 0;
}
