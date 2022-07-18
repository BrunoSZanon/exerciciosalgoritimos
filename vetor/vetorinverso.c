#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

    int c,v[6];

    for (c=0;c<6;c++){
        printf("\nEntre com 6 numeros:");
        scanf("%d",&v[c]);

    }

    for (c=5;c>=0;c--){

        printf("\nAs notas sao:%d ",v[c]);
    }
