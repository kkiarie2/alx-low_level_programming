#include "main.h"

/**
* print_diagonal - Prints diagonals
* @n: number of spaces and \
* Return: void
*/
void print_diagonal(int n)
{
int row, lines;

if (n <= 0)

{

putchar('\n');

}

else

{

for (row = 1; row <= n; row++)

{

if (row > 1)

{

for (lines = 1; lines <= row - 1; lines++)

{

putchar(' ');

}

}

putchar('\\');

putchar('\n');

}

}
}
