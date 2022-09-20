#include "main.h"

/**
* _puts - prints a string
* @str: string
* Return: nothing.
*
*/

void _puts(char *str)

{

int i;
char curr;

for (i = 0; str[i] != '\0'; i++)
{

curr = str[i];

_putchar(curr);

}

_putchar('\n');

return (0);
}
