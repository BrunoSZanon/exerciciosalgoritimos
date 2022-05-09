#include<math.h>
#include<conio.h>
#include<stdio.h>


int main (){
int idade;
printf("digite um numero:\n ");
scanf("%d",&idade);
if ((idade>= 5) && (idade <=7)) {
printf ("infantil a"); }
if (( idade>=8) && (idade<=10)) {
printf ("infantil b");
}
if (( idade>=11)&& (idade<=13)) {
printf ("juvenil a");

} if ((idade>= 14) && (idade<=17)) {
printf ("juvenil b");
}
if (idade>=18) {
printf("adulto"); }}



