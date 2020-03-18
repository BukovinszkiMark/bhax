#include <stdio.h>

int
main (void)
{
 int integer = 1;
 int counter = 1;

  while ((integer <<= 1))
    {
    counter = counter +1;
    }

  printf("%d",counter);

  return 0;
}
