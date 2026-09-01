#include <stdio.h>

int main (){
    int tab = 5;

    for(int i = 1; i <= 10; i++){
        tab = 5 * i;
        printf("5 x %d = %d\n", i, tab);
    }
    return 0;
}