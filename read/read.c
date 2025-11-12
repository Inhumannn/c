#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number); // Cherche le nombre dans la ram
  printf("Number = %d\n", number);

  return 0;
}