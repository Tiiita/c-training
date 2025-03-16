#include <stdlib.h>
#include "dynamicarray.h"

DynamicArray init() {
    //Default capacity
    return init_capacity(10);
}

DynamicArray init_capacity(DynamicArray *self, size_t capacity) {
    self->array = (void **)malloc(capacity * sizeof(void *));
}


DynamicArray add(DynamicArray *self, void *element) {

}
void *get(int i) {

}