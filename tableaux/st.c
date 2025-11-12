#include <stdio.h>
#include <string.h>

int main(void)
{
  char prenom[32];

  printf("Entrez votre prenom : ");
  scanf("%s", prenom); // Utilisation de pointeur
  printf("Bonjour %s\n", prenom);
  printf("La longueur de votre prénom est : %lu", strlen(prenom));

  return 0;
}