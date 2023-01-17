/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float chico = 1.7, ze = 1.1;
    int ano = 0;
    
    while(chico>=ze)
    {
    chico += 0.02;
    ze += 0.03;
    ano++;
    }
   printf("Sao necessarios %d anos para chico ser maior q ze", ano);
}
