// calcular a pa
// input eh o primeiro termo da pa, razao da pa e quantidade de termos a ser calculados

#include <stdio.h>

void calcPa(int pa, int razao, int qtd) {
    for (int i = 1; i<= qtd; i++){ // var i começa em um, no meio há a condição, i++
        pa += razao;
        printf("a progressao eh: %d\n", pa);
    }
}

void calcPg(int pg, int razao, int qtd) {
    for (int i = 1; i<= qtd; i++){ // tratamento da repetição, i++ significa q ele vai executar
        pg *= razao;
        printf("a progressao eh: %d\n", pg);
    }
}

int main(){
    int termo;
    int razao;
    int qtd;

    printf("digite o primeiro termo: ");
    scanf("%d", &termo);

    printf("digite a razao: ");
    scanf("%d", &razao);

    printf("digite a quantidade: ");
    scanf("%d", &qtd);

    if(qtd <= 0){
        printf("n pode negativo e zero nao fi kkkkk");
    } else {
        calcPa(termo, razao, qtd);
        printf("----------------\n");
        calcPg(termo, razao, qtd);
    }

    return 0;
}