#include "main.h"

/**
* more_numbers - prints 1-4 x10
* Return: void
*/

void more_numbers(void)
{
int i, j, ones, tens;

for (j = 0; j <= 9; j++)

{

for (i = 0; i <= 14; i++)

{
tens = i / 10;

ones = i % 10;

if (i > 9)
{
_putchar(tens + '0');

}
_putchar(ones + '0');
}

_putchar('\n');

}

}
