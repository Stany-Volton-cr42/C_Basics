#include <stdio.h>

int main() {
  int matrix1[9][9], matrix2[9][9], sum[9][9];

  int rows, columns;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  printf("Enter the elements of matrix 1:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the elements of matrix 2:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("The sum of the two matrices is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
