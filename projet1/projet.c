#include <stdio.h>

int main(void)
{
  int tempC;

  printf("Veuilez rentrer la température en °C : \n");
  scanf("%d", &tempC);
  int tempF = (tempC * 1.8) + 32;
  printf("La température en °F est de : %d\n", tempF);

  return 0;
}