#include <stdio.h>

int main(){
    int max;

    printf("digite o numero maximo: ");
    scanf("%d", &max);

    if (max % 2 != 0 && max > 0){
        int init = 1;
        for(; init <= max; ){
            for(int i = init; i <= max; i++){
                printf("%d ", i);
            }
            printf("\n");
            init++;
            max--;
        }
    } else {
        printf("n pode ser par...");
    }
}