#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr,num,i;
    printf("Enter the number of element: ");
    scanf("%d",&num);
    ptr = (int*)malloc(num* sizeof (int));
    for (i = 0; i < num; i++){
        printf("Enter the %d element: ",i +1);
        scanf("%d",ptr+i);
    }
    printf("\nHere is your stored element:");
    for (i = 0; i < num; i++){
        printf("\n %d",*(ptr+i));
    }
    
    return 0;
}