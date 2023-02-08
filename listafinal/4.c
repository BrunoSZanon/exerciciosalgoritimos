#include <stdio.h>
#include <math.h>

#define N 200

int main() {
  float salario[N];
  int filhos[N];
  float mediaSalario = 0;
  float mediaFilhos = 0;
  float maiorSalario = 0;
  int contadorSalarioAte150 = 0;

  // Entrada de dados
  for (int i = 0; i < N; i++) {
    printf("Informe o salario da pessoa %d: ", i + 1);
    scanf("%f", &salario[i]);
    printf("Informe o numero de filhos da pessoa %d: ", i + 1);
    scanf("%d", &filhos[i]);

    // Acumulando para o cálculo da média
    mediaSalario += salario[i];
    mediaFilhos += filhos[i];

    // Verificando se o salário é o maior
    if (salario[i] > maiorSalario) {
      maiorSalario = salario[i];
    }

    // Verificando se o salário é até R$ 150,00
    if (salario[i] <= 150.0) {
      contadorSalarioAte150++;
    }
  }

  // Calculando a média
  mediaSalario = mediaSalario / N;
  mediaFilhos = mediaFilhos / N;

  // Calculando a porcentagem de pessoas com salários até R$ 150,00
  float porcentagemSalarioAte150 = (float) contadorSalarioAte150 / N * 100;

  // Imprimindo resultados
  printf("Media do salario: R$ %.2f\n", mediaSalario);
  printf("Media do numero de filhos: %.2f\n", mediaFilhos);
  printf("Maior salario: R$ %.2f\n", maiorSalario);
  printf("Porcentagem de pessoas com salario ate R$ 150,00: %.2f%%\n", porcentagemSalarioAte150);

  return 0;
}
