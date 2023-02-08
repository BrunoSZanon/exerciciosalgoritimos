#include <stdio.h>
#include <string.h>

int main() {
  char word1[20], word2[20];
  printf("Digite a primeira palavra: ");
  scanf("%s", word1);
  printf("Digite a segunda palavra: ");
  scanf("%s", word2);

  if (strcmp(word1, word2) == 0) {
    printf("As palavras digitadas são iguais.\n");
  } else {
    printf("As palavras digitadas são diferentes.\n");
  }

  if (strcmp(word1, "papagaio") == 0 || strcmp(word2, "papagaio") == 0) {
    printf("Uma das palavras digitadas é igual a papagaio.\n");
  }

  return 0;
}
