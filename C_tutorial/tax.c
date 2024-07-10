#include <stdio.h>

int main(){
    int incame;
    float tax =0;
    printf("Enter your income ",incame);
    scanf("%d",&incame);
    if (incame<250000)
    {
        printf("Your income is less than 2.5 lakhs so you pay 0 tax");
    }
    else if (incame>250000 && incame<500000)
    {
        printf("you hame to pay some amount of tax \n");
        tax = tax + 0.05*(incame-250000);
    }
    else if (incame>500000 && incame<1000000)
    {
        printf("you have to pay this much of tax \n");
        tax = tax + 0.2*(incame-500000);
        tax = tax + tax + 0.05*(500000-250000);
    }
    else
    {
        printf("Your income is above 10 lakhs \n");
        tax = tax + tax + 0.02*(500000-250000);
        tax = tax + 0.02*(1000000 - 500000);
        tax = tax + 0.03*(incame-1000000);
    }
    printf("Total tax to paid is %f",tax);
    
    return 0;
}