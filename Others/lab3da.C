#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int num = 5; 
    int* ptr = (int*)malloc(num * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < num; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nHere are your stored elements:\n");

    for (i = 0; i < num; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
