#include<stdio.h>
#include<conio.h>
#include<math.h>


main(){



int i=0,idade;
char sexo,nome;


for(i=0;i<=1;i++){



    printf("\nEntre com seu nome:\n ");
    scanf("\n%c",&nome);
    printf("Entre com seu sexo: F/M\n");
    scanf("\n%c",&sexo);
    printf("Entre com sua idade:\n ");
    scanf("%d",&idade);


    if((idade>20) && (sexo=='M')){

        printf("%c",nome);
    }
}












}
