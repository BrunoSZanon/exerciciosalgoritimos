#include<math.h>
#include<stdio.h>
#include<conio.h>

main()

{
    char s;


    printf("entre a sigla do seu estado: ");
    scanf("%c",&s);

if (s=='m'){
    printf("mineiro");
}
else if (s=='s'){
    printf("paulista");
}
else if (s=='r'){
    printf("carioca");
}
else {
    printf("outros estados");
}



}
