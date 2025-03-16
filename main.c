#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int main() {
    //Stack alloc
    int a = 1000;
    int b = 6;
    printf("Result of %d - %d: %f\n", a, b, (float) subtract(a, b));
    

    int *ptr = &a;
    printf("Ptr: %p\n", ptr);
    printf("Value: %i\n", (void *)*ptr);

    printf("\n\n");

    //Heap alloc
    int *ptr_2 = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Allocation failed");
        return 1;
    }

    *ptr_2 = 8;
    printf("Ptr 2: %p\n", ptr_2);
    printf("Value of ptr2: %i", *ptr_2);

    free(ptr_2);
    return 0;
}