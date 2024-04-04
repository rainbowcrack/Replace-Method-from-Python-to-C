#include "stdio.h"
// calculo com numeros
int main(void) {
  // atribuição de variáveis
  int x;
  int y;
  int resp;
  // leitura 
  printf("Escreva um número: ");
  scanf("%d", &x);
  printf("Escreva outro número: ");
  scanf("%d", &y);
  // soma das variáveis
  resp = x + y;
  // resposta
  printf("%d", resp);
  return 0;
}
