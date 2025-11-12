#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number); // Cherche la variables dans la ram
  printf("Number = %d\n", number);

  return 0;
}