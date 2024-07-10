#include <stdio.h>

int main(){
    int marks,A = 89,B = 70,C = 69,D = 59;
    printf("What is your marks on final Exam: ",marks);
    scanf("%d",&marks);
    if (A < marks)
    {
        printf("This Result got A Grade");
    }
    else if (B < marks)
    {
        printf("You got Grade B");
    }
    else if (C < marks)
    {
        printf("You got grade C");
    }
    else if (D < marks)
    {
        printf("U got Grade D");
    }
    else
    {
        printf("You need to improve: ");
    }
    
    return 0;
}