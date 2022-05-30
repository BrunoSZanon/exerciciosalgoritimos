#include<stdio.h>
#include<conio.h>

main(){

    char x;

    printf("entre com uma letra:\n ");
    scanf("%c",&x);


    if (x == 'a') {
        printf("A");
    }

     else if (x == 'b'){
        printf("B");
     }
     else if (x == 'c'){

        printf("C");
     }

     else {
        printf("Letra desconhecida");
     }


}
