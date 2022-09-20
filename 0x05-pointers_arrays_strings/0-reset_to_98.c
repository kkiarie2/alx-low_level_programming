#include "main.h"

/**
* reset_to_98 - this function does not modify n
* @n: a useless integer
*
* Return: nothing.
*
*/

void reset_to_98(int *n)

{

*n = 98;

}

/**
* main - parameters are passed by value
*
* Return: Always 0.
*/

int main(void)

{

int n;

int *p;

n = 102;

p = &n;

printf("Value of 'n' before the call: %d\n", n);

reset_to_98(p);

printf("Value of 'n' after the call: %d\n", n);

return (0);

}


