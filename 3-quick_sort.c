#include "sort.h"
/**
 * quick_sort - quick_sort
 * @array : int *array
 * @size : size_t size
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
fastsort(array, 0, size - 1, size);
}
/**
 * fastsort - fastsort
 * @a: array
 * @l: the begin index of the array
 * @h: the last index of the array
 * @size: size
 * Return: none
 */
void fastsort(int *array, int lex, int m, size_t size)
{
int r;
if (lex < m)
{
r = lomuto(array, lex, m, size);
fastsort(array, lex, r - 1, size);
fastsort(array, r + 1, m, size);
}
}
/**
 * lomuto - Lomuto
 * @a: array
 * @l: begin array index
 * @h: last array index
 * @size: size
 */
int lomuto(int *array, int lex, int m, size_t size)
{
int combox;
int p, x, tmp;
combox = array[m];
p = lex - 1;
for (x = lex; x <= m; x++)
{
if (array[x] <= combox)
{
p += 1;
if (p != x)
{
tmp = array[p];
array[p] = array[x];
array[x] = tmp;
print_array(array, size);
}
}
}
return (p);
}
