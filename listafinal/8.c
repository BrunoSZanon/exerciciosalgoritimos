#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

void preencheMatriz(int mat[N][N]) {
  int i, j;

  srand(time(NULL));

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      mat[i][j] = rand() % 20 + 1;
    }
  }
}

void transformaMatriz(int mat[N][N]) {
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < i; j++) {
      mat[i][j] = 0;
    }
  }
}

void imprimeMatriz(int mat[N][N]) {
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int mat[N][N];

  preencheMatriz(mat);
  printf("Matriz original:\n");
  imprimeMatriz(mat);

  transformaMatriz(mat);
  printf("Matriz transformada:\n");
  imprimeMatriz(mat);

  return 0;
}
