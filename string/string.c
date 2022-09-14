#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i;
    char nome[7];
    printf("\n Informe o nome de uma pessoa com no maximo 7 letras: \n");
    scanf("%s",nome);

    for(i=0;i<7;i++){


        printf("%c",nome[6-i]);
    }
    getch();
    return 0;
}
