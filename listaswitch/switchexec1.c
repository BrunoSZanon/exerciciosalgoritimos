#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

    int    p;

    printf("digite seu codigo de produto:\n ");

    printf("digite 1 para Parafuso:\n ");
    printf("digite 2 para Porca:\n ");
    printf("digite 3 para Prego:\n ");
    printf("digite 4 para Martelo:\n ");
    printf("digite 5 para Tomada:\n ");

    scanf("%d",&p);
          switch(p){

              case 1:
                  printf("R$ 00,15");
              break;

              case 2:
                  printf("R$ 00,05");
              break;

              case 3:
                  printf("R$ 00,10");
              break;

              case 4:
                  printf("R$ 40,00");
              break;

              case 5:
                  printf("R$ 3,00");
              break;

 }
}
