#include "main.h"

/**
 * print_last_digit - checks value of last digit
 * @n: the character to check
 * Return: prints value of last digit
 */

int print_last_digit(int n)

{

int x,y;
x = n % 10;
if (x < 0)
x = -x;
y = '0' + x;
_putchar(y);

return (x);
}
