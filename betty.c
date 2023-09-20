/* Include libraries in alphabetical order */
#include <stdio.h>
#include <stdlib.h>

/* Global constants in UPPERCASE */
#define MAX_SIZE 100 

/* Function prototypes */ 
void print_array(int *array, size_t size);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        /* Local variables start with _ */
        int _array[MAX_SIZE];
        size_t _i;

        /* Initialize array */
        for (_i = 0; _i < MAX_SIZE; _i++)
        {
                _array[_i] = _i;
        }

        print_array(_array, MAX_SIZE);

        return (0);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t size)
{
        size_t _i;

        for (_i = 0; _i < size; _i++)
        {
                printf("%d\n", array[_i]); 
        }
}
