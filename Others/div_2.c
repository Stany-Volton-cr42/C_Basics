#include <stdio.h>

int main(){
  int a;
  printf("Enter any integer value: ");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("The value is divisible by 2\n");
  } else {
    printf("The value is not divisible by 2\n");
  }

  return 0;
}