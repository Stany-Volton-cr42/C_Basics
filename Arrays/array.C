#include <stdio.h>

int main()
{

//     // General way of difining multiple variable but when 
//     // have these type of same and many variable then we use the ARRAYs 

//     int marks1, marks2, marks3;
//     marks1 = 39;
//     marks2 = 56;
//     marks3 = 69;

    // This is very easy way storing samilar type of variable

    int marks[3];
    marks[0] = 39;
    marks[1] = 56;
    marks[2] = 69;
    marks[3] = 78;

// we can use array as the variable
printf("The four value of marks is %d %d %d and %d\n"
    ,marks[0] ,marks[1] ,marks[2] ,marks[3] );
    
    return 0;
}
