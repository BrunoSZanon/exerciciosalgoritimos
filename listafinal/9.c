#include <stdio.h>

#define QTD_ALUNOS 3
#define QTD_QUESTOES 10

void le_respostas(char respostas[QTD_ALUNOS][QTD_QUESTOES]) {
  for (int i = 0; i < QTD_ALUNOS; i++) {
    int matricula;
    printf("Informe a matricula do aluno %d: ", i + 1);
    scanf("%d", &matricula);

    printf("Informe as respostas do aluno %d (a, b, c, d ou e):\n", i + 1);
    for (int j = 0; j < QTD_QUESTOES; j++) {
      printf("Questão %d: ", j + 1);
      scanf(" %c", &respostas[i][j]);
    }

    int nota = 0;
    for (int j = 0; j < QTD_QUESTOES; j++) {
      char resposta_aluno = respostas[i][j];
      char resposta_correta;
      printf("Informe a resposta correta da questão %d: ", j + 1);
      scanf(" %c", &resposta_correta);

      if (resposta_aluno == resposta_correta) {
        nota++;
      }
    }

    printf("Matricula: %d\n", matricula);
    printf("Respostas: ");
    for (int j = 0; j < QTD_QUESTOES; j++) {
      printf("%c ", respostas[i][j]);
    }
    printf("\n");
    printf("Nota: %d\n", nota);
  }

  int aprovados = 0;
  for (int i = 0; i < QTD_ALUNOS; i++) {
    int nota = 0;
    for (int j = 0; j < QTD_QUESTOES; j++) {
      char resposta_aluno = respostas[i][j];
      char resposta_correta;
      printf("Informe a resposta correta da questão %d: ", j + 1);
      scanf(" %c", &resposta_correta);

      if (resposta_aluno == resposta_correta) {
        nota++;
      }
    }

    if (nota >= 7) {
      aprovados++;
    }
  }

  printf("Percentual de aprovação: %.2f%%\n", 100.0 * aprovados / QTD_ALUNOS);
}

int main(void) {
  char respostas[QTD_ALUNOS][QTD_QUESTOES];
  le_respostas(respostas);
  return 0;
}
