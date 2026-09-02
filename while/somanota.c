#include <stdio.h>

int main(){
    float nota = 0, soma = 0;
    while(nota >= 0){ // usado quando a gnt n sabe quantas vezes vai repetir
        print("digite o valor da nota: ");
        scanf("%f", &nota)
        soma = soma + nota;
        priintf("a soma eh: %f\n", soma);
    }
return 0;
}