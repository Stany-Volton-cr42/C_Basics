#include <stdio.h>

int main(){
    int i = 42;
// Now I want to store the address of the memory in the other veriable

// int j = &i;
// printf("%d",j);

// so we can't store the address just like that
// so to store the adress of the variable to another variable.
// we use the special kind of variable to store the address of the another variable.
    int *j = &i;
// when we puting *j meand the *j is pointer varible and we can store the address 
// of the any variable. but when we didn't put the * we are simoly saying intiger j
// and integer j is not able to store the address of the variable
    printf("the value of i is %d \n",*j);
// look at the below code carefully
    printf("The value of i is %d \n",i);
    printf("The address of i is %u\n",&i);
// so we access address directly from i or 
    printf("The address of p is %d",j);
// we can access the address through the j, which stores the address of the i
    return 0;
    
}
