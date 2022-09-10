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
char caps;
for (small = 'a'; small <= 'z'; small++)
putchar(small);
for (caps = 'A'; caps <= 'Z'; caps++)
putchar(caps);
printf("\n");
return (0);
}
