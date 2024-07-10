#include <stdio.h>

int main(){
    char charactor;
    printf("Enter the charctar Only: ");
    scanf("%c",&charactor);
    if (charactor >= 97 && charactor<=122)
    {
        printf("It is the lower case charctor ");
    }
    else
    {
        printf("Its a Upper case charctor ");
    }
    
    return 0;
}