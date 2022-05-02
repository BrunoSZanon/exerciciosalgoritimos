#include<stdio.h>
#include<conio.h>

main()
{
    int c, f;

    printf("graus em celsius:");
    scanf("%d", &c);

    f = c*1.8+32;

    printf("\n graus em fahrenheit:%d" ,f);

    getch();
}

