#include <stdio.h>

int main() {
  float massa_inicial, massa_final;
  int tempo_total, horas, minutos, segundos;

  printf("Insira a massa inicial em gramas: ");
  scanf("%f", &massa_inicial);

  massa_final = massa_inicial;
  tempo_total = 0;

  while (massa_final >= 0.5) {
    massa_final /= 2;
    tempo_total += 50;
  }

  horas = tempo_total / 3600;
  minutos = (tempo_total % 3600) / 60;
  segundos = (tempo_total % 3600) % 60;

  printf("Massa inicial: %.2f gramas\n", massa_inicial);
  printf("Massa final: %.2f gramas\n", massa_final);
  printf("Tempo necessario: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

  return 0;
}
