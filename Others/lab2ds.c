#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, num, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    // Using calloc to allocate and initialize memory to zero
    ptr = (int *)calloc(num, sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }
    
    for (i = 0; i < num; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", ptr + i);
    }
    
    printf("\nHere are your stored elements:\n");
    
    for (i = 0; i < num; i++) {
        printf("%d\n", *(ptr + i));
    }

    // Don't forget to free the allocated memory when done
    free(ptr);
    
    return 0;
}
