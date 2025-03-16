#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

typedef struct
{
    void **array;
    size_t capacity;
} DynamicArray;

DynamicArray init();
DynamicArray init_capacity(DynamicArray *self, size_t capacity);
DynamicArray add(void *element);
void *get(int i);

#endif