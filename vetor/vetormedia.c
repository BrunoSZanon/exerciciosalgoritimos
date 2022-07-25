
#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

    int i,v[5],soma=0,media;

    for (i=0;i<5;i++){
        printf("\nEntre com os elementos:");
        scanf("%d",&v[i]);
        soma=soma+v[i];
        }
        media=soma/5;

        for(i=0;i<5;i++){

        if(v[i]>media){

        printf("\nO numero acima da media e: %d",v[i]);

        }

        }

}
