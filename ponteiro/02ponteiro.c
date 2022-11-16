#include<stdio.h>
#include<conio.h>

int main()
{

    int *ptr1;
    int *ptr2;
    int var1;
    int var2;
    int sub;
    int adc;

    printf("Primeiro ponteiro: ");
    scanf("%d", &var1);

    printf("\nSegundo ponteiro: ");
    scanf("%d", &var2);


    var1 = &ptr1;
    var2 = &ptr2;

    printf("valor var1 = %d\n", var1);
    printf("valor var2 = %d\n", var2);

    if(ptr1>ptr2)
    {
        sub = var1 - var2;
        printf("%d", sub);

    }
    else if(ptr2>ptr1)
    {
      adc = var2 + var1;
      printf("%d", adc);

    }

}
