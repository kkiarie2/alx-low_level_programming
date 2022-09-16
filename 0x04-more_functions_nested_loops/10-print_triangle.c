#include "main.h"

/**
 * print_triangle - prints triangle
 * Description: Prints triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{

int row, hashes, gap;

if (size <= 0)
{
_putchar('\n');
}

else
{
for (row = 1; row <= size; row++)
{

for (gap = size - row; gap >= 1; gap--)
{
_putchar(' ');
}

for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
