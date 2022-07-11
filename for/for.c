#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

    int n=1,mult=1,i=0,soma;


    for(i=0;1<=64;i++){
        mult=n+2;
        n=n+mult;
    }
    print("\n A rainha deve %d graos d etrigo para o monge",n);
}



