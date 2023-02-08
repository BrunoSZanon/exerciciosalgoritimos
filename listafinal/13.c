#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivinhaNumero(void) {
  int numeroGerado, numeroDigitado;

  srand(time(NULL));
  numeroGerado = rand() % 100 + 1;

  printf("Tente adivinhar o número entre 1 e 100: ");
  scanf("%d", &numeroDigitado);

  while (numeroDigitado != numeroGerado) {
    if (numeroDigitado < numeroGerado) {
      printf("MAIOR\n");
    } else {
      printf("MENOR\n");
    }
    printf("Tente novamente: ");
    scanf("%d", &numeroDigitado);
  }
  printf("ACERTOU\n");
}

int main(void) {
  adivinhaNumero();
  return 0;
}
