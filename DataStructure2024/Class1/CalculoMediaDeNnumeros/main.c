/* Cálculo da média de um número n de números reais */
#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v) {
  int i;
  float soma = 0;

  for (i = 0; i < n; i++) {
    soma += v[i];
  }

  return soma / n;
}

int main(void) {
  int i, n;
  float *v;
  float med;

  scanf("%d", &n); /* leitura do número n de valores */
  v = (float *)malloc(n * sizeof(float)); /* alocação dinâmica */

  if (v == NULL) {
    printf("Memoria insuficiente.\n");
    return 1;
  }

  for (i = 0; i < n; i++)
    scanf("%f", &v[i]);

  med = media(n, v); /* chama a função de cálculo de média */
  printf("Media = %.2f \n", med);
  free(v); /* libera memória */

  return 0;
}