#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct entrada{
    char nome[20];
    char sobrenome[20];
    char fone[10];
};

struct entrada lista[2];

int i;

main()
{
    for(i=0;i<2;i++)
    {
        printf("Digite o seu nome: ");
        scanf("%s",lista[i].nome);
        printf("Digite o seu sobrenome: ");
        scanf("%s",lista[i].sobrenome);
        printf("Digite o seu numero de telefone: ");
        scanf("%s",lista[i].fone);
    }

    for(i=0;i<2;i++)
    {
        printf("Nome: %s %s",lista[i].nome,lista[i].sobrenome);
        printf("\t\t Telefone: %s\n",lista[i].fone);

    }
}
