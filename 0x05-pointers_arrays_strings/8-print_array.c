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
int i = 0;
while (i < n)
{
if (i < (n - 1))
{
printf("%i, ", a[i]);
}
else
{
printf("%i", a[i]);
}

i++;

}

printf("\n");

}
