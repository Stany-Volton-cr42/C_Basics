#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year ", year);
    scanf("%d", &year);
    if (year % 4 != 0)
    {
        printf("ita is the common year ");
    }
    else if (year % 100 != 0)
    {
        printf("This is the leap year ");
    }
    else if (year % 400 != 0)
    {
        printf("This is the common year ");
    }
    else
    {
        printf("This is the leap year ");
    }

    return 0;
}