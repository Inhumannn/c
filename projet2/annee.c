#include <stdio.h>

int main(void)
{
  int year;

  printf("Rentree une annee : ");
  scanf("%d", &year);

  if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) printf("L'année est bissextile");
  else if (year < 45 ) printf("L'année doit être supérieur à 45");
  else printf("L'année n'est pas bissextile");

  return 0;
}