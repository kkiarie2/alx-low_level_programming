#include "main.h"
/**
* _puts_recursion - prints given string
* @s: given string
* Return: Always 0.
*/

void _puts_recursion(char *s)

{

char curr;

int i;

for (i = 0; s[i] != '\0'; i++)
{

curr = s[i];

_putchar(curr);



}

_putchar('\n');
}
