// write a program to find questient and remender of number
// #include <stdio.h>

// int main(){
//     int divident,diviser;
//     float ques,rem;
//     printf("Enter the divident:");
//     scanf("%d",&divident);

//     printf("Enter the diviser: ");
//     scanf("%d",&diviser);
//     ques = divident/diviser;
//     rem = divident % diviser;

//     printf("Your quis: %.2f",ques);
//     printf("\nYour remender %.2f",rem);
//     return 0;
// }

// #include <stdio.h>
// int main(){
    
//     int max(int a,int b,int c,int d){
//     printf("Enter the four value",a,b,c,d);
//     scanf("%d %d %d %d ",a,b,c,d);
//     if (a<b){
//     printf("%d",b);
//     }
//     else if (b<c){
//     printf ("%d",c);
//     }
//     else if (c<d) {
//     printf ("%d",d);
//     }
//     else {
//     printf ("%d",a);
//     }
//     return 0;
//     }
// }
// #include <stdio.h>

// // int main(){
// int max(int a, int b, int c, int d)
// {
//     int max = a;
    
//     if (b > max) {
//         max = b;
//     }
//     if (c > max) {
//         max = c;
//     }
//     if (d > max) {
//         max = d;
//     }
    
//     return max;
//     // }
//     return 0;
// }

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number/char:- ",a);
    scanf("%d",&a);
    printf("Enter THe number/char:- ",b);
    scanf("%d",&b);
    printf("Your value is %d and %d",a,b);
    return 0;
}