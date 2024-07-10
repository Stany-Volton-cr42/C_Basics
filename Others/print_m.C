#include <stdio.h>

int main() {
  char character = '1';
  int i = 0;

  printf("Enter m to get out of loop:");

  while (character != 'm' && character != 'M') {
    printf("\nEnter the character to print: ");
    scanf(" %c", &character); 
    printf("Your entered character: %c\n", character);
    i++;
  }

  printf("You are out of the loop\n");

  return 0;
}
