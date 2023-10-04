#include <stdio.h>
#define tam 6

void ordenaInsDireta(int *v) {
  int aux;
  int j;
  for (int i = 1; i < tam; i++) {
    aux = v[i];
    j = i - 1;
    while (j >= 0 && aux < v[j]) {
      v[j + 1] = v[j];
      j--;
    }
    if (j != (i - 1)) {
      v[j + 1] = aux;
    }
  }
}

void imprimeVetor(int *vetor) {
  for (int i = 0; i < tam; i++)
    printf("%d  ", vetor[i]);
  printf("\n");
}

void main() {
  int v[tam] = {5, 2, 4, 6, 1, 3};
  ordenaInsDireta(v);
  imprimeVetor(v);
}