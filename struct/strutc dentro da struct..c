#include<stdio.h>
#include<string.h>

int main(){

struct data{

    int dia;
    char mes[10];
    int ano;

};

struct pessoa{

    char telefone[10];
    char nome[20];
    char endereco[20];

    struct data nascimento;
};

    struct pessoa p1;

    strcpy(p1.nome,"Jorge");
    printf("Nome: %s \n",p1.nome);

    strcpy(p1.telefone,"999100309");
    printf("Telefone: %s\n",p1.telefone);

    strcpy(p1.endereco,"Av Rio Branco");
    printf("Endereco: %s\n",p1.endereco);

    p1.nascimento.dia=10;
    printf("Dia: %d\n",p1.nascimento.dia);

    strcpy(p1.nascimento.mes,"Maio");
    printf("Mes: %s\n",p1.nascimento.mes);

    p1.nascimento.ano=2005;
    printf("Ano: %d\n",p1.nascimento.ano);

    /* Para colocar algo em uma string usar o strcpy desta forma acima*/
    /* Para colocar algo em um inteiro nao precisa de nada*/

    getch();
}
