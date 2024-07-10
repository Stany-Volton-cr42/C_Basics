// #include <stdio.h>

// int main(){
//     int a=10;
//     printf(" The value of a is: %d", a);
//     return 0;
// }
// int add(int a, int b)
// {
// return a+b;
// }

// #include <stdio.h>
// int max(int a,int b,int c,int d){

    
//     else if (c>a && c<b && c>d)
//     {
        
//     }
    
//     else if (d>a && d>b && d>c)
//     {
//         return d;
//     }
    
//     }

// int main(){
//     int a,b,c,d,ans;

//     ans = max(a,b,c,d);
//     printf(" your greatest value is: %d",ans);
//     return 0;
//}

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}