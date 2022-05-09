#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
 int pp,pt,op;
 printf("seu peso na terra: ");
 scanf("%d",&pt);

 printf("digite 1 para Mercurio:\n" );
 printf("digite 2 para Venus:\n" );
 printf("digite 3 para Marte:\n" );
 printf("digite 4 para Jupiter:\n" );
 printf("digite 5 para Saturno:\n" );
 printf("digite 6 para Urano:\n" );

 scanf("%d",&op);
      switch(op){
          case 1:
          pp=(pt/10)*0.37;
          break;

          case 2:
          pp=(pt/10)*0.88;
          break;

          case 3:
          pp=(pt/10)*0.38;
          break;

          case 4:
          pp=(pt/10)*2.64;
          break;

          case 5:
          pp=(pt/10)*1.15;
          break;

          case 6:
          pp=(pt/10)*1.17;
          break;

 }
printf("peso no planeta: %d",pp);


}
