#include <stdio.h>

float pesoIdealHomem(float altura) {
  return (72.7 * altura) - 58;
}

float pesoIdealMulher(float altura) {
  return (62.1 * altura) - 44.7;
}

float pesoIdeal(float altura, char sexo) {
  if (sexo == 'M') {
    return pesoIdealHomem(altura);
  } else if (sexo == 'F') {
    return pesoIdealMulher(altura);
  } else {
    printf("Sexo invalido.\n");
    return 0;
  }
}

int main() {
  float altura;
  char sexo;
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu sexo (M/F): ");
  scanf(" %c", &sexo);
  float pesoIdeal = pesoIdeal(altura, sexo);
  if (pesoIdeal > 0) {
    printf("Seu peso ideal e: %.2f\n", pesoIdeal);
  }
  return 0;
}
