#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,media;

    printf("entre primeira nota:");

    scanf("%d", &a);

    printf("entre segunda nota:");

    scanf("%d", &b);

    printf("entre terceira nota:");

    scanf("%d", &c);


    media = (a * 2 + b * 3 + c * 5)/10;

    printf("\n media e:%d", media);

    getch();
}

