#include <stdio.h>

int main(void)
{
  float notes[] = {14.2, 15.6, 19};
  
  for (int i = 0; i < 3; i++)
  {
    printf("La note est : %.2f\n", notes[i]);
  }

  return 0;
}