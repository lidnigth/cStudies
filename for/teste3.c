#include <stdio.h>

int main(){
    int n;
    int soma;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    soma = 0;
    for (int i = 1; i <= n; i++){
        soma = soma + i;
    }
    printf("a soma de 1 + %d eh igual a: %d\n ", n, soma);
    return 0;
}