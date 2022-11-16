#include<stdio.h>
#include<conio.h>

int main()
{

    int matriz[100][100];
    int *p;

    0
    int cont;

    p = matriz[0]; // inicializando a matriz em 0
    for(cont=0;cont<4;cont++){

        *p=0;
        printf("%d\n", *p);
        p++; // adicionando no adress
    }
    for(cont=1;cont<4;cont++)
    {
        (*p)++;
        printf("\n%d",*p);

    }

    getch();

}
