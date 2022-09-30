#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of parameters
* @argv: array of strings
* Return: Always 0 (Success)
*/



void main(int argc, char *argv[])

{

int i;

for (i = 0; i < argc; i++)

{

printf("%s ", argv[i]);

}

printf("\n");
return (0);
}
