#include<stdio.h>
#include<conio.h>

main(){


    int x,y;

    printf("entre com um numero:\n ");
    scanf("%d",&x);

    printf("entre com outro numero:\n ");
    scanf("%d",&y);

    if (x>y){
        printf("x e maior que y");
    }

    else if (x==y){
        printf("x e igual a y");
    }

    else {
        printf("y maior que x");
    }

}
