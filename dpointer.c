#include <stdio.h>

int main() {
    int var = 10;
    int *ptr;       // Pointer to int
    int **ptr_to_ptr; // Pointer to pointer to int
    
    ptr = &var;     // Assigning address of var to ptr
    ptr_to_ptr = &ptr; // Assigning address of ptr to ptr_to_ptr
    
    printf("Value of var: %d\n", var);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value pointed by ptr_to_ptr: %d\n", **ptr_to_ptr);
    
    printf("\nChanging value of var using ptr\n");
    *ptr = 20; // Changing value of var using ptr
    
    printf("New value of var: %d\n", var);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value pointed by ptr_to_ptr: %d\n", **ptr_to_ptr);
    
    printf("\nChanging value of var using ptr_to_ptr\n");
    **ptr_to_ptr = 30; // Changing value of var using ptr_to_ptr
    
    printf("New value of var: %d\n", var);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value pointed by ptr_to_ptr: %d\n", **ptr_to_ptr);
    
    return 0;
}
         