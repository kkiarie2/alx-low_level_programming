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
for (small = 'z'; small >= 'a'; small--)
putchar(small);
putchar('\n');
return (0);
}
