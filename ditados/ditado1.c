#include<stdio.h>

main()
{
 int preco,litro,x;

 printf("insira o valor do litro: ");

 scanf("%d",&litro);

 printf("insira o valor que deseja abastecer: ");

 scanf("%d",&preco);

 x = preco/litro;
printf("voce abasteceu %d litros de gasolina",x);

}
