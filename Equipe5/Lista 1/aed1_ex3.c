/*
Lucas Almeida da Silva
*/
#include <stdio.h>
#define TamMax 100

int main() {
  int n, i, v[TamMax];

  printf("Digite o comprimento da seq��ncia: ");
  scanf("%d", &n);

  printf("Digite uma seq��ncia com %d n�meros inteiros: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (i = n-1; i >= 0; i--)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}

