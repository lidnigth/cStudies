#include <stdio.h>

int main(){
    int num;
    
    printf("digite o num: ");
    scanf("%d", &num);

    while(num != 0){
        for(int i = num; i >= 1; i--){
            printf("%d\n", i);
        };
    }
}