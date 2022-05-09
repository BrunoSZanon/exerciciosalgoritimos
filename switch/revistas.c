#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
 int r;
 printf("digite seu codigo de revista:\n" );


 printf("digite 101 para Veja \n" );
 printf("digite 102 para Exame \n" );
 printf("digite 103 para Info \n" );
 printf("digite 104 para Colecao Info \n" );
 printf("digite 105 para Voce S/A \n" );


 scanf("%d",&r);
      switch(r){
          case 101:
              printf("R$ 297");
          break;

          case 102:
              printf("R$ 184");
          break;

          case 103:
              printf("R$ 107");
          break;

          case 104:
              printf("R$ 139.86");
          break;

          case 105:
              printf("R$ 90");
          break;

}
}
