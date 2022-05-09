#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
 int sn,nj;
 printf("digite seu nivel jedi: ");


 printf("digite 1 para Descoberto:\n" );
 printf("digite 2 para Padawan:\n" );
 printf("digite 3 para Cavaleiro Jedi:\n" );
 printf("digite 4 para Mestre Jedi:\n" );


 scanf("%d",&nj);
      switch(nj){
          case 1:
              printf("Descoberto");
          break;

          case 2:
              printf("Padawan");
          break;

          case 3:
              printf("Cavaleiro Jedi");
          break;

          case 4:
              printf("Mestre Jedi");
          break;



 }



}
