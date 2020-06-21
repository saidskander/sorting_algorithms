#include "sort.h"
/**
 * bubble_sort - bubble sort algo.
 * @array : int *array
 * @size : size_t size
 */
void bubble_sort(int *array, size_t size)
{
int x = 0;
int box = 0;
int  path = 0, size_path = size;
for (x = 0; x < size_path; x++)
{
box = 0;
if (array[x] > array[x + 1])
{
path = array[x];
array[x] = array[x + 1];
array[x + 1] = path;
box = 1;
print_array(array, size);
}
if (x == size_path - 2)
{
if (box == 0)
break;
size_path--;
x = -1;
}
}
}
