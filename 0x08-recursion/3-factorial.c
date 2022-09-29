#include "main.h"

/**
* factorial - prints factorial of a num
* @n: given num
* Return: Always 0.
*/

int factorial(int n)

{

if (n < 0)

return (-1);

if (n == 0)

return (1);

return (n * factorial(n - 1));
}
