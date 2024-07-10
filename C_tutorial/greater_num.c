#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the number ",a,b,c,d);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d) 
    {
        printf("THe greatest number is %d",a);
    }
    else if (b>c && b>d)
    {
        printf("The greatest number is %d",b);
    }
    else if (c>d)
    {
        printf("The greatest vlaue is %d",c);
    }
    else
    {
        printf("THe greatest number is %d",d);
    }
    
    return 0;
}