#include <stdio.h>
#include <stdlib.h>

/**
* main - fizz buzz test
* Return: void
*/

int main(void)

{

int i;

for (i = 0; i <= 100; i++)
{

if ((i > 0) && ((i % 3) == 0) && ((i % 5) == 0))

{

printf("FizzBuzz");

}

else if ((i > 0) && ((i % 3) == 0))
{



printf("Fizz");

}

else if ((i > 0) && ((i % 5) == 0))
{
printf("Buzz");

}
else

printf("%d", i);

putchar(' ');

}

putchar('\n');

return (0);
}
