#include<stdio.h>
#include<math.h>
int main()
{
    float BS,DA,HRA,Net_salary;
    printf("Enter the basic salary of the employee\n");
    scanf("%f",&BS);
    DA=0.25*BS;  // 25 percent of the basic salary
    HRA=0.15*BS;  // 15 percent of the basic salary
    Net_salary=BS-(0.10*(BS+DA+HRA));  
    printf("The net salary of the employee is: %0.2f",Net_salary);
    return 0;
}

// #include <stdio.h>

// int main(){
//     void* a = 4;
//     printf("the value of a is %p", a);
//     return 0;
// }

// #include <stdio.h>  
// int main()  
// {  
//    int a=90;  
//    void *ptr;  
//    ptr=&a;  
//    printf("Value which is pointed by ptr pointer : %d",*(int*)ptr);  
//     return 0;  
// }  