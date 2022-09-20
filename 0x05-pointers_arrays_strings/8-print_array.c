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
if
(a[i] < 0)
a[i] = -a[i];
if
((i == (n - 1)))
printf("%d", a[i]);
else
{
printf("%d, ", a[i]);
}
_putchar('\n');
}

}
