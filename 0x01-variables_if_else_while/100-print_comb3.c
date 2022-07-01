#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  if ( i != j && i < j)
	    {
	      putchar(i);
	      putchar(j);
	      putchar(', ');
	    }
	}
    }
}
