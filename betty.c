#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 100

/**
 * print_array -  this Prints the entire array.
 * @array: The integer array to be printed.
 * @array_size: The size of the array.
 */
void print_entire_array(int *array, size_t array_size);

/**
 * main - Entry point of the program.
 * Return: Always 0 (Success).
 */
int main(void) 
{
    int our_array[MAX_ARRAY_SIZE];
    size_t i;

    for (i = 0; i < MAX_ARRAY_SIZE; i++) 
    {
        our_array[i] = i; 
    }

    print_entire_array(our_array, MAX_ARRAY_SIZE);

    return (0); 
}

/**
 * print_array -  this will Print the entire r array.
 * @array: The
