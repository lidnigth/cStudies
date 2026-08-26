// calcular a pa
// input eh o primeiro termo da pa, razao da pa e quantidade de termos a ser calculados

#include <stdio.h>

int main(){
    int pa;
    int razao;
    int qtd;

    printf("digite o primeiro termo: ");
    scanf("%d", &pa);

    printf("digite a razao: ");
    scanf("%d", &razao);

    printf("digite a quantidade: ");
    scanf("%d", &qtd);

    if (qtd <= 0){
        printf("zero ou negativo nao pode");
    } else {
        for (int i = 1; i<= qtd; i++){
            pa += razao;
            printf("a progressao eh: %d\n", pa);
        }
    }
    return 0;
}