#include<stdio.h>
#include<conio.h>

main(){

    char nome;
    float a, b, m;
    int cont = 0;


    do{

    printf("Digite a primeira nota: ");
    scanf("%f",&a);
    printf("Digite a segunda nota: ");
    scanf("%f",&b);

    m=(a+b)/2;
    printf("Media do aluno = %f\n",m);

    cont=cont+1;
} while (cont<5);

}

