#include<stdio.h>
#include<conio.h>

main()
{
   int x,cubo,quadrado;

   printf("entre com um numero:");
   scanf("%d", &x);

   cubo = pow(x,3);
   quadrado = x*x;

   printf("\n o cubo e:%d", cubo);
   printf("\n o quadrado e:%d", quadrado);

   getch();



}

