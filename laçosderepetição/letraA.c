#include <stdio.h>
#include<conio.h>

main(){

 int num, cont, cont1;

 cont=0;
 cont1=0;

 while(cont<10){

        printf("\nentre com o numero: ");
        scanf("%d",&num);

        if(num>30 && num<90)
        cont1=cont1+1;
        cont=cont+1;
 }

        printf("a quantidade de n: %d",cont1);


}


