#include <stdio.h>
#include "main.h"

/**
* print_array - prints n terms in array
* @a: array
* @n: integer
*
*/

void print_array(int *a, int n)

{
int i;

for (i = 0; i <= n - 1; i++)
{
printf("%d", a[i]);
if ((i == (n - 1)))
{
continue;
}
else
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
