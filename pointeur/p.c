#include <stdio.h>

void add_one(int *number)
{
  printf("L'addresse de number : %p\n", number);
  *number = *number + 1;
}

int main(void)
{
  int value = 42;

  printf("Value :  %d\n", value);
  printf("L'addresse de value : %p\n", &value);

  add_one(&value);

  printf("Value :  %d\n", value);
  printf("L'addresse de value : %p\n", &value);

  return 0;
}