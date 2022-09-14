#include "main.h"



/**
 *
 * _isalpha - checks if character is alphabet
 *
 * @c: the character to check
 * Return: prints 1 if char is lower and 0 if not
 */

int _isalpha(int c)

{

return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
