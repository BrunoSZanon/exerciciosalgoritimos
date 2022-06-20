#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
int idade, maioridade, menoridade, qtd_mulheres = 0, soma_salario = 0, qtd_habitantes = 0;
        int idade_menorsalario;
        char sexo, sexo_menorsalario;
        int salario, menor_salario;

        maioridade = 0;
        menoridade = 200;


                while (idade >= 0){

                    printf("\n Informe a idade do entrevistado: ");
                    scanf("%d", &idade);

                          if(idade < 0){
                            break;
                        }

                            if(idade > maioridade){
                            maioridade = idade;

                        }
                            if(idade < menoridade){
                            menoridade = idade;
                        }

                    printf("\n Agora , informe o sexo: ");
                    scanf("%s", &sexo);

                    printf("\nPor ultimo, informe o salario (DIGITE SEM VIRGULA): ");
                    scanf("%d", &salario);

                        if(sexo == 'F'){
                            qtd_mulheres = qtd_mulheres + 1;
                            }

                        if(salario >= 0){
                        soma_salario = soma_salario + salario;
                        qtd_habitantes = qtd_habitantes + 1;
                        }

                        if(menor_salario == 0) {
                        menor_salario = salario;
                        idade_menorsalario = idade;
                        sexo_menorsalario = sexo;
                        }


                            if(salario <= menor_salario){
                            menor_salario = salario;
                            idade_menorsalario = idade;
                            sexo_menorsalario = sexo;
                        }

                }

                printf("\n A menor idade eh: %d", menoridade);
                printf("\n A maior idade eh: %d", maioridade);
                printf("\n A quantidade de pessoas na entrevista eh: %d", qtd_habitantes);
                printf("\n A media salarial da populacao eh: %d", (soma_salario / qtd_habitantes));
                printf("\n A idade da pessoa e o sexo de menor salario foi: %d anos, do sexo: %c", idade_menorsalario, sexo_menorsalario);
                printf("\n A quantidade de mulheres eh: %d", qtd_mulheres);

                return 0;

}
