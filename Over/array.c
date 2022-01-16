#include <stdio.h>

int main(int argument_count, char *argument_vector[])
{
    int array[10], *address;

    address = array;

    printf("The array is at %p and the pointer is associated to address %p\n", array, address);
    
    printf("%s\n", argument_vector[2]);

    return 0;
}