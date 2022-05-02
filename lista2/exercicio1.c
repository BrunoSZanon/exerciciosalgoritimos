#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,soma ;

    printf("entre com dois numeros:");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = x + y;

    printf("\n a soma dos numeros e:%d", soma);

    getch();
}
