#include <stdio.h>

int liczba;
int silnia = 1;

int main(void) {
  printf("Podaj liczbe: ");
  scanf("%d", &liczba);

  for(int i = liczba; i > 0; i--) {
    silnia *= i;
  }

  printf("Silnia wynosi: %d", silnia);
  return 0;
}