#include <stdio.h>

int liczba;
int silnia = 1;

static void silniaLiczby() {
  printf("Podaj liczbe: ");
  scanf("%d", &liczba);

  if(liczba < 0) {
    printf("Podaj liczbe dodatnia");
    silniaLiczby();
  }

  for(int i = liczba; i > 0; i--) {
    silnia *= i;
  }

  printf("Silnia wynosi: %d", silnia);
  silnia = 1;
  printf("\n");
  silniaLiczby();
}


int main(void) {
  silniaLiczby();
  return 0;
}