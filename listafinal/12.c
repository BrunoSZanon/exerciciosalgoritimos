#include <stdio.h>
#include <string.h>
#define MAX 100

void ordena_lista(char lista[][MAX], int n);

int main() {
    int n, i;
    char lista[MAX][MAX];

    printf("Quantos nomes deseja inserir na lista? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Insira o nome: ");
        scanf("%s", lista[i]);
    }

    ordena_lista(lista, n);

    printf("\nNomes ordenados alfabeticamente: \n");
    for (i = 0; i < n; i++) {
        printf("%s\n", lista[i]);
    }

    return 0;
}

void ordena_lista(char lista[][MAX], int n) {
    int i, j;
    char aux[MAX];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(lista[i], lista[j]) > 0) {
                strcpy(aux, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], aux);
            }
        }
    }
}
