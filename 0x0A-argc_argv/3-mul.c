#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of parameters
* @argv: array of strings
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)

{

int n, ex;



ex = 0;

if (argc != 3)

{

printf("%s\n", "Error");

ex = 1;

}

else

{

n = atoi(argv[1]) * atoi(argv[2]);

printf("%i\n", n);

}

return (ex);
}