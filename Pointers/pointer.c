#include <stdio.h>

int main(){
    int i = 22;
    int j = 34;
    // it gives us the value of the memory address that where the 22 is stroed
    printf("The address to the i and j si %u and %u \n",&i,&j);
    // The below line is also give the 22 and 34 but
    // we are saying that in opposite manner thai is if the address of i is 354333 than
    // than in that address what is the value stroed in that address
    // so we are accessing the value through the address
    printf("The value of i and j is %d and %d",*(&i),*(&j));
    return 0;
}