// #include <stdio.h>

// int main(){
//     for ( i = 0; i < 10; i++)
//     {
//         printf()
//     }
    
//     return 0;
// }
// #include <stdio.h> 
// void main(){
    
    // +     int i; 
//     printf("The first 10 natural numbers are:\n"); 
//     for (i=1;i<=10;i++) 
//     { 
//     printf("%d ",i);
//     }
// }
// #include <stdio.h>
// void main(){
// 	int i;
// 	printf(" The table of 1 \n ");
// 	for (i = 1; i<=10; i++)
// 	{
// 	printf(  " * %d = %d \n",i);
// 	}
// }

#include <stdio.h>  
int main()  
{  
    int num, i; // declare a variable  
    printf (" Enter a number to generate the table in C: ");  
    scanf (" %d", &num); // take a positive number from the user  
      
    printf ("\n Table of %d", num);  
    // use for loop to iterate the number from 1 to 10  
    for ( i = 1; i <= 10; i++)  
    {  
        printf ("\n %d * %d = %d", num, i, (num*i));  
    }  
    return 0;  
}  