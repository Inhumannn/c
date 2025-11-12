#include <stdio.h>

int main(void)
{
  printf("0 signifie faux\n", 1 == 1 && 0 == 1); // vrai et faux = faux
  printf("1 signifie vrai\n", 1 == 1 || 0 == 1); // vrai ou faux = vrai

  printf("5 == 3 donnne %d\n", 5 == 3);
  printf("5 != 3 donnne %d\n", 5 != 3);

  printf("5 < 3 donnne %d\n", 5 < 3);
  printf("5 > 3 donnne %d\n", 5 > 3);

  printf("5 <= 3 donnne %d\n", 5 <= 3);
  printf("5 >= 3 donnne %d\n", 5 >= 3);
}