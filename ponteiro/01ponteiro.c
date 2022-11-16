#include<stdio.h>
#include<conio.h>


int main()
{

    int *ptr1;
    int var;
    int **ptr2;

    printf("Manda a variavel ai:\n");
    scanf("%d",&var);

    ptr1 = &var;
    ptr2 = &ptr1;

    printf("sua variavel eh: %d", ptr2);



}
