#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - executes a function given as a parameter on each element
*@array : the array to operate on
*@size : its size
*@action :the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (size == 0 || array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
