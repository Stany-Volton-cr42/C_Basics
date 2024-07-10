// #include <stdio.h>
// int sum(){      						// function defenation 
//     int x,y;
//     printf("\n Enter the 1st number ");
//     scanf("%d",&x);
//     printf("Enter the 2nd value ");
//     scanf("%d",&y);
//     return x+y;
// }

// int sum(); 							 //function decleration 


// int main(){
//     int c;

//     printf("\n I am going to calculate the sum of 2 number ");
//     c = sum();  												// function call
//     printf("the sum is %d",c);

// }

#include<stdio.h>  
void sum();  
void main()  
{  
    int a,b;     
    sum();  
}  
void sum()  
{  
    int a,b;
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);
    printf("\nThe sum is %d",a+b);  

} 