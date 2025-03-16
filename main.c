#include <stdio.h>
#include "test.h"

int main() {
    //Stack alloc
    int a = 1000;
    int b = 6;
    printf("Result of %d - %d: %f\n", a, b, (float) subtract(a, b));
    

    int *ptr = &a;
    printf("Ptr: %p\n", ptr);
    printf("Value: %i\n", (void *)*ptr);


    //Heap alloc
    int *ptr = 
    return 0;
}