#include <stdio.h>

struct Student 
{
  char prenom[32];
  int age;
  float notes[10];
};

int main(void)
{
  struct Student s1;

  printf("Prenom : ");
  scanf("%s", s1.prenom);

  printf("Age : ");
  scanf("%d", &s1.age);

  printf("Prénom : %s, Age : %d\n", s1.prenom, s1.age);
  return 0;
}