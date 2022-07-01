#include <stdio.h>
#include <stdlib.h>

int main(void)  
{  
  int i, j;  
  for (i = 0; i < 10; i++)    
    {      
      for (j = 0; j < 10; j++)	
	{
	  for (k = 0; k < 10; k++)
	    {
	      if (i != j && j != k && i < j && j < k)
		{	      
		  putchar(i);
		  putchar(j);
		  putchar(k);
		  putchar(', ');
		}
	    }	  
	}      
    }
  putchar('\n');
}
