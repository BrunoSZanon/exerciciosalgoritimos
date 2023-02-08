#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[81];
  int len, num_pontuacao = 0, num_numeros = 0, num_minusculas = 0;

  printf("Digite uma string (com no máximo 80 caracteres): ");
  scanf("%80[^\n]", string);
  len = strlen(string);

  for (int i = 0; i < len; i++) {
    if (ispunct(string[i])) {
      num_pontuacao++;
    } else if (isdigit(string[i])) {
      num_numeros++;
    } else if (islower(string[i])) {
      num_minusculas++;
    }
  }

  printf("Quantidade de caracteres: %d\n", len);
  printf("Quantidade de caracteres de pontuação: %d\n", num_pontuacao);
  printf("Quantidade de caracteres numéricos: %d\n", num_numeros);
  printf("Quantidade de caracteres minúsculas: %d\n", num_minusculas);

  return 0;
}
