#include<math.h>
#include<conio.h>
#include<stdio.h>



int main (){
int pagamento;
printf("digite um numero:\n ");
scanf("%d",&pagamento);
if (pagamento <=10) {
printf ("30$"); }
if (( pagamento>10) && (pagamento<=29)) {
printf ("60$");
}
if (( pagamento>29)&& (pagamento<=45)) {
printf ("120$");

} if ((pagamento>45) && (pagamento<=59)) {
printf ("150$");
}
if ((pagamento>59) && (pagamento<=65)) {
printf ("250");
}
if (pagamento>65) {
    printf("400$");

}
}
