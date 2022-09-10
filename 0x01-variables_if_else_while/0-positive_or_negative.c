#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 *main - entry point
 *
 *Return -Always 0
 */
int main(void)
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
if(n == 0){
printf("%lf is zero\n ", n);
}else if (n > 0)
{
printf("%lf is positive\n", n);
}else{
printf("lf is negative\n", n);
} 
   return (0);
  
}
