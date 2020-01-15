#include <stdio.h>

int main()
{
  int i, Number, count;

  printf(" Prime Number from 1 to 100 are: \n");
  for(Number = 1; Number <= 1000; Number++)
  {
    count = 0;
    for (i = 2; i <Number; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 )
    {
	printf(" %d ", Number);
    }
  }
  return 0;
}

