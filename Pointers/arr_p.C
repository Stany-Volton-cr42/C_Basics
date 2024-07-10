#include <stdio.h>

void array(int *ptr, int n){
    for(int i = 0; i <n; i++)
    {
        printf("The value of the Element %d is %d \n", i+1, *(ptr+i));
    }
}
int main()
{
    int arr[] = {63,2,65,7,4,3,32};
    array(arr ,7);
    return 0;
}