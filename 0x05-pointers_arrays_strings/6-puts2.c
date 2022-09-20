#include "main.h"


/**
* puts2 - prints every other string char
* @str: string to process.
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0' ; i++)
{
if ((i % 2) == 0)
_putchar(*(str + i));
}
_putchar('\n');
}

