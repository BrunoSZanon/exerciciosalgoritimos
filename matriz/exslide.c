#include<stdio.h>
#include<math.h>
#include<conio.h>

main(){

     int i,j,a[2][2],b[2][2],c[2][2];


     for(i=0;i<2;i++)
        for(j=0;j<2;j++){

            printf("\n Entre com os elementos da Matriz A: ");
            scanf("%d",&a[i][j]);

            printf("\n Entre com os elementos da Matriz B: ");
            scanf("%d",&b[i][j]);

            c[i][j]=a[i][j]+b[i][j];
        }


         for(i=0;i<3;i++)
        for(j=0;j<3;j++){

                printf("\nOs elementos da Matriz:%d",c[i][j]);

        }








}

