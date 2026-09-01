#include <stdio.h>

int main() {
    for (int i = 2; i <= 20; i++){
        // printf("o contador i comeca com %d\n", i); -> mostra o contador

        if (i % 2 == 0){ // -> da a condição que filtra os pares
            printf("o numero eh: %d\n", i);
        }
    }
    return 0;
}