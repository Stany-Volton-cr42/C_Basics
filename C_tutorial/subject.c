#include <stdio.h>

int main(){
    // int marks = 30;
    int phy,chy,bio;
    printf("Enter the number of physics: ",phy);
    scanf("%d",&phy);
    printf("Enter the number of chy: ",chy);
    scanf("%d",&chy);
    printf("Enter the number of bio: ",bio);
    scanf("%d",&bio);
    float marks = ((phy+chy+bio)/3);
    if (marks>=40)
    {
        if (phy<33  || chy<33 || bio<33){
            printf("You are not passed in one of the subject ");       
        }
        else{
            printf("you are passed ");
        }
    }
    else{
        printf(" you not passed because your marks is less then 40%%");
    }
    return 0;      
}
    
// int main(){
//     int marks = 30;
//     int phy,chy,bio,result;
//     printf("Enter the result: ",phy,chy,bio);
//     scanf("%d %d %d",&phy,&chy,&bio);
//     result = sub(phy,chy,bio);
//     printf("You pased in all subject %d",result);
//     return 0;
// }