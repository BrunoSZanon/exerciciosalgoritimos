#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){


float i=0,num=0,raiz,cubo;



for(i=0;i<=3;i++){


        printf("\nEntre com um numero: ");
        scanf("%f",&num);

        cubo=pow(num,3);
        raiz=pow(num,0.33333333333333);

        printf("\n o cubo e: %f",cubo);
        printf("\n a raiz e: %f",raiz);




}

}


