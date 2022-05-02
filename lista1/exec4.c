#include<math.h>
#include<stdio.h>
#include<conio.h>

main()

{
    float n1,n2,media;


    printf("entre suas notas: ");
    scanf("%f",&n1);
    scanf("%f",&n2);

    media = ((n1*2)+(n2*3))/5;

if (media>=6){
    printf("aprovado");
}
else if (media<6 && media>2){
    printf("recupercao");

}
else{
    printf("reprovado");
}

}
