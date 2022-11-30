// Bruno Zanon //
// Maria Eduarda Soares //

#include <stdio.h>
#include <string.h>

int limpar(int x);
main(){

    system("color 05");
    int op;
    char x,h,s1[100],s2[100];

    for(int i=0;i<=100;i++){


    printf("-------------------------------------------------\n");
    printf("                     MENU\n");
    printf("-------------------------------------------------\n");
    printf("OPERACOES LOGICAS:\n");
    printf("1-Negacao(~)\n");
    printf("2-Conjuncao(^)\n");
    printf("3-Disjuncao inclusiva(v)\n");
    printf("4-Disjuncao exclusiva(_V)\n");
    printf("5-Condicional(->)\n");
    printf("6-Bicondicional(<->)\n");
    printf("7-Encerrar o programa\n ");
    printf("\n");



    printf("\nVoce deseja entrar com 1 ou 2 frases? ");
    printf("(Uma unica oracao eh utilizada somente em caso de negacao)\n");
    scanf("%d",&x);
    fflush(stdin);

    if(x==1){
    printf("Entre com a oracao: ");
    gets(s1);
    }
    if(x==2){

    printf("Entre com a primeira oracao(p):");
    gets(s1);

    printf("\nEntre com a segunda oracao(q):");
    gets(s2);}


    printf("\nDigite qual das operacoes logicas acima voce deseja aplicar:");
    scanf("%d",&op);
    fflush(stdin);


    switch(op){
    char sn1[250],sn2[250];

case 1:
    printf("\nEntre com a primeira parte da frase que deseja negar:");
    gets(sn1);

    printf("\nEntre com a segunda parte da frase que deseja negar: ");
    gets(sn2);

        printf("\nA frase modificada e:");
        printf("\n%s nao %s\n",sn1,sn2);
        printf("\nDigite 'x' para apagar: ");
        scanf("%c",&h);
         limpar(h);



    break;
case 2:
    printf("\nA frase modificada e:");
    printf("\n%s e %s\n",s1,s2);
    printf("\nDigite 'x' para apagar: ");
    scanf("%c",&h);
     limpar(h);



    break;
case 3:
    printf("\nA frase modificada e:");
    printf("\n%s ou %s\n",s1,s2);
    printf("\nDigite 'x' para apagar: ");
    scanf("%c",&h);
     limpar(h);

    break;
case 4:
    printf("\nA frase modificada e:");
    printf("\n Ou %s ou %s\n",s1,s2);
    printf("\nDigite 'x' para apagar: ");
    scanf("%c",&h);
     limpar(h);
    break;
case 5:
    printf("\nA frase modificada e:");
    printf("\nSe %s entao %s \n",s1,s2);
    printf("\nDigite 'x' para apagar: ");
    scanf("%c",&h);
     limpar(h);
    break;
case 6:
    printf("\nA frase modificada e:");
    printf("\n%s se e somente se %s \n",s1,s2);
    printf("\nDigite 'x' para apagar: ");
    scanf("%c",&h);
    limpar(h);
    break;
case 7:
        return 0;


    }







}
}

int limpar(int x){

      system("cls");

}

