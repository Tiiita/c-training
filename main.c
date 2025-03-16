#include <stdio.h>
#include <stdlib.h>
#include "test.h"

typedef struct Person
{
    char *name;
    int age;
} Person;


int main() {
    //strings

    Person person = {"test", 2};
    Person *p_Person = &person;

    printf("%s\n", p_Person->name);


    p_Person->name = "test2";
    printf("%s\n", p_Person->name);


    Person persons[20];
    size_t persons_len = sizeof(persons) / sizeof(Person);
    Person *p_Persons = persons;
    for (int i = 0; i < persons_len; i++)
    {
        p_Persons->age = 2;
        p_Persons++;
    }
    
    p_Persons = persons;
    
    for (int i = 0; i < persons_len; i++)
    {
        printf("Person %i age is: %i\n", i + 1, p_Persons->age);
        p_Persons++;
    }


    char *str = "this is a string literal";
    char single_char = 'a';
    printf("%s\n", str);
    printf("%c", single_char);

    printf("\n");
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