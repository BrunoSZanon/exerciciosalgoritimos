#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int tabuada = 0;
    printf("\nDigite a tabuada que voce deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);

    for(int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
