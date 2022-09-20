#include "main.h"

/**
* print_rev - reverses a string
*
* @s: string
*/

void print_rev(char *s)

{

int len;

while (*(s + len) != '\0')

{

len++;

}

while (len--)

{

_putchar(*(s + (len)));

}

_putchar('\n');
}
