#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0.
 */

int main(void)
{
char small;
char q = 'q';
char e = 'e';
for (small = 'a'; small <= 'z'; small++)
if (small != e && small != q)
putchar(small);
printf("\n");
return (0);
}
