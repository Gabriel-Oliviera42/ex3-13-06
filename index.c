#include <stdio.h>

int main(void) {

  system ("clear");

  int v[20], N, I, Valor, J = 0;

  do {
    printf("Quantidade de numeros: ");
    scanf("%d",&N);
  } while (N < 0 || N > 20);

  for (I = 0; I < N; I++) {
    printf("entre com %dº o valor: ", I + 1);
    scanf("%d",&Valor);
    if (I == 0) {
      v[J] = Valor;
      J++;
    }
    else {
      if (Valor > v[J - 1]) {
        v[J] = Valor;
        J++;
      }
    }
  }
  for (I = 0; I < J; I++)
    printf("%d ", v[I]);
    
  return 0;
}