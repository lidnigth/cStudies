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
    printf("a soma de todos os numeros de 1 ate %d eh: %d\n", n, soma);
    return 0;
}