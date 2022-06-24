#include<conio.h>
#include<stdio.h>
#include<math.h>

main(){


int num,cont=0,cont1=0;

while(cont<3){


    printf("\nEntre com tres numeros:\n");
    scanf("%d",&num);

    if((num>=30) && (num<=90)){
        cont1++;
    }
    cont++;
}


printf("Tem: %d",cont1);
























}
