#include "main.h"

/**
* _strlen - this function does not modify n
*
* @s: string
*
* Return: nothing.
*
*/

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; ++i);
return (i);
}
