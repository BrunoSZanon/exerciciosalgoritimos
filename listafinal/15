#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
