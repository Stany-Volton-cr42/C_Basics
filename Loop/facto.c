#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() {
    int matrix1[ROWS][COLUMNS];
    int matrix2[ROWS][COLUMNS];
    int sum[ROWS][COLUMNS];

    // Read the first matrix from the user
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the second matrix from the user
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
