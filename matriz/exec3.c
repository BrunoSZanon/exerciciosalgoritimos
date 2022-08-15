#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
float matriz[3][3];
int l,c;
float soma=0,soma1=0,soma2=0,soma3=0,soma4=0,soma5=0,soma6=0,soma7=0;

for(l=0;l<3;l++)
for(c=0;c<3;c++){

    printf("Entre com os elementos da matriz:  %d %d",l,c);
    scanf("%f",&matriz[l][c]);
}

for(l=0;l<3;l++)
for(c=0;c<3;c++){

    soma=soma+matriz[l][c];
}

for(l=1;l<2;l++)
for(c=0;c<3;c++){

     soma1=soma1+matriz[l][c];

}
for(l=2;l<3;l++)
for(c=0;c<3;c++){

        soma2=soma2+matriz[l][c];

}
for(l=0;l<3;l++)
for(c=0;c<1;c++){}

