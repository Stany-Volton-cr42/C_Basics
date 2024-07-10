#include<stdio.h>
#include <conio.h>
int main(){

    int length,breath;
    printf("write the length \n",length);
    scanf("%d",&length);

    printf("write the breath \n" ,breath);
    scanf("%d",&breath);

    printf("the area of rectangle: %d \n",length*breath);
    printf("parameter of rectangle is: %d",2*(length + breath));
    getch();
}
