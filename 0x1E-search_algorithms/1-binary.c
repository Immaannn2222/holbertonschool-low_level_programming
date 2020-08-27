#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elts of an array
 * @value: value to search for
 * 
 * Return: index if success , -1 if fail
 */

int binary_search(int *array, size_t size, int value)
{
size_t i, j = size / 2;
if (!array)
return (-1);
for (i = 0; i < size; i++)
{
if (array[i] != value)
{
if (array[i] < array[j])
{
binary_search(array, j + 1, value);
printf("Searching in array:%d,\n", array[i]);
}
else
{
binary_search(array, size - j + 1, value);
printf("Searching in array:%d,\n", array[i]);
}
return (i);
}
return (-1);
}
return (1);
}
