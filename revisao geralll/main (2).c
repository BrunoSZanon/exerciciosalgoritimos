#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
    float bonus, tempo, salario;

    printf("A quantos anos voce trabalha na empresa: ");
    scanf("%f",&tempo);

    printf("\nQual seu salario: ");
    scanf("%f",&salario);

    if(tempo>=5)
    {
     bonus = 0.20*salario;

    printf("\nSeu bonus e de: %f",bonus);
    }
    else if (tempo<5)
    {
     bonus = 0.10*salario;

    printf("\nSeu bonus e de: %f",bonus);
    }
}