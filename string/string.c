#include<stdio.h> #include<string.h> #include<conio.h>
main(){

int l, c;
char nomes[5][20], aux[20];

for(l=0; l<5; l++){

printf("Entre com os nomes:\n");
gets(nomes[l]);
}

for(l=0; l<5; l++){
for(c=l+1; c<5; c++){
if(strcmp (nomes[l], nomes[c])>0)
{
strcpy(aux, nomes[l]);
strcpy(nomes[l], nomes[c]);
strcpy(nomes[c], aux);
}
}
}

printf("Imprimindo o Vetor ordenado:\n");
for(l=0; l<5; l++){
puts(nomes[l]);
}
}
