//Escreva um programa que leia um vetor V[15] de números inteiros, mostrar o conteúdo das posições pares.
#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

    int i,v[5],maior=0,x;

    for (i=0;i<5;i++){
        printf("\nEntre com o elemento: ");
        scanf("%d",&v[i]);



    if(v[i]>maior){


        maior=v[i];
        x=i;
    }
    }

printf("\n O maior elemento e:%d",maior);
printf("\n Esta na posicao:%d",x);
}
