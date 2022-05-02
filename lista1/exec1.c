#include<math.h>
#include<stdio.h>
#include<conio.h>

main()

{
    float n,raiz,quadrado;

    printf("insira um numero");
    scanf("%f", &n);

    if (n > 0){

        raiz = sqrt(n);
        printf("%f",raiz);



}

else{

    quadrado = pow(n,2);
    printf("%f",quadrado);
}



}
