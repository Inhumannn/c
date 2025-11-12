#include <stdio.h>

int main(void)
{
  int i = 0;
  int j = 10; 

  while ( i < 10 )
  {
    printf("%d\n", i);
    i = i + 1;
  }

  do 
  {
    printf("%d\n", i);
    j = j + 1;
  } while ( i <= 9 );

  for (int k = 11 ; k <= 15; k++)
  {
    printf("%d\n", k);
  }
}