#include <stdio.h>

int main()
{

 // One of the most cleaver way to using the array is in loops for the writting
// less lines of the code
    int marks[4];

    for (int i = 0; i <4; i++)
    {
        printf("Enter the value of Marks %d ", i+1);
        // +1 is to starting at one in output
        scanf("%d", &marks[i]);
    }
    
    // For printing
    for (int i = 0; i <4; i++)
    {
        printf("The value of marks of student %d is %d \n" ,i+1,marks[i]);
    }
    
    return 0;
}