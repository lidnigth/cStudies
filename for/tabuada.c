#include <stdio.h>

int main (){
    for(int tab = 1; tab <= 5; tab++){
        for(int i = 1; i <= 10; i++){
            int mult = tab * i;
            printf("%d x %d = %d \n", tab, i, mult);
        }
        printf("---------\n");
    }
    return 0;
}