#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
int num;
char small;
for (num = '0'; num <= '9'; num++)
putchar(num);
for (small = 'a'; small <= 'f'; small++)
putchar(small);
putchar('\n');
return (0);
}
