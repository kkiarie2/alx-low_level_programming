#include "main.h"
/**
 * print_alphabet_x10
 *-prints a-z 10 times
 */

void print_alphabet_x10(void)

{

char xy = 'a';

int i;

for (i = 0; i <= 9; i++)

{



for (xy = 'a'; xy <= 'z'; xy++)

{

_putchar(xy);



}

_putchar('\n');

}


}
