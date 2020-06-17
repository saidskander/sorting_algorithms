#include "sort.h"
/**
 * selection_sort - selection_sort
 * @array : int *array
 * @size : size_t size
 */
void selection_sort(int *array, size_t size)
{
int tmp;
/** tmp for swaping possition **/
size_t x, jx, lx;
for (x = 0; x < size - 1; x++)
{
lx = x;
for (jx = x + 1; jx < size; jx++)
{
if (array[lx] > array[jx])
lx = jx;
}
if (lx != x)
{
tmp = array[lx];
array[lx] = array[x];
array[x] = tmp;
print_array(array, size);
}
}
}
