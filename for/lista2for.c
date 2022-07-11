#include<stdio.h>
#include<conio.h>
#include<math.h>


main(){


    int i=0,maior=0,nota;


    for(i=0;i<=10;i++){

        printf("Qual sua nota:\n ");
        scanf("%d",&nota);


    if(nota>maior){
            maior=nota;
    }
    }
    printf("a maior nota e %d",nota);



}

