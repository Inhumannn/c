#include <stdio.h>

int somme(int a, int b)
{
  return a + b;
}

int main(void)
{
  int sommeR =  somme(3, 5);
  printf("%d", sommeR);
  return 0;
}