#include <stdio.h>

int main(void)
{
  int a, b;
  printf("Veillez entrez le nombre a : ");
  scanf("%d", &a);
  printf("Veillez entrez le nombre b : ");
  scanf("%d", &b);

  int somme = a + b;
  int difference = a - b;
  int produit = a * b;
  float quotient = a / b;
  int modulo = a % b;

  printf("a + b = %d\n", somme);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", produit);
  printf("a / b = %.2f\n", quotient);
  printf("a %% b = %d\n", modulo);
  return 0;
}