// #include <stdio.h>
//     int x,y;
//     int sum(int x,int y);
//     return x+y;

// int main(){
    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  int a, b, c;

  // Read a line of input from the user
  char input[1024];
  fgets(input, sizeof(input), stdin);

  // Parse the integers from the input string using sscanf
  int items_read = sscanf(input, "%d %d %d", &a, &b, &c);
  if (items_read != 3) {
    printf("Error: invalid input.\n");
    return 1;
  }

  // Check for the case where all three numbers are equal
  if (a == b && b == c) {
    printf("All three numbers are equal.\n");
    return 0;
  }

  // Find the largest number using fmax
  int largest = fmax(a, fmax(b, c));
  printf("%d is the largest number\n", largest);

  return 0;
}
