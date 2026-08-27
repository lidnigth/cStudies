/* 
1. Escreva um programa que leia 3 notas de um aluno e a média das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
de acordo com a tabela:

maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E

*/

/* COMO EU ACHEI Q ERA:

#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media1;

    printf("qual foi sua primeira nota? ");
    scanf("%f", &nota1);

    printf("qual foi sua segunda nota? ");
    scanf("%f", &nota2);

    printf("qual foi sua terceira nota? ");
    scanf("%f", &nota3);

    printf("qual foi a media dos seus exercicios? ");
    scanf("%f", &media1);

    float calculaMedia (float media1, float nota1, float nota2, float nota3, float media2);{
        float media2;
        media2 = (nota1 + nota2*2 + nota3*3 + media1)/7;

        if (media2 >= 9 && media2 < 10){
            printf("sua media eh %2.f. nota: A ", media2);
        } else if (media2 >= 7.5 && media2 < 9){
            printf("sua media eh %2.f. nota: B ", media2);
        } else if (media2 >= 6 && media2 < 7.5){
            printf("sua media eh %2.f. nota: C ", media2);
        } else if (media2 >= 4 && media2 < 6){
            printf("sua media eh %2.f. nota: D ", media2);
        } else if (media2 < 4){
            printf("sua media eh %2.f. nota: E ", media2);
        } else {
            printf("coloca uma nota valida ai pf");
        }
    }
} */

#include <stdio.h>

int main(){
    float nota1, nota2, nota3;

    printf("qual foi sua primeira nota? ");
    scanf("%f", &nota1);

    printf("qual foi sua segunda nota? ");
    scanf("%f", &nota2);

    printf("qual foi sua terceira nota? ");
    scanf("%f", &nota3);

    float calculaMedia (float nota1, float nota2, float nota3, float media2, float media);{
        float media;
        media = (nota1 + nota2 + nota3) / 3;
        float media2;
        media2 = (nota1 + (nota2*2) + (nota3*3) + media)/7;

        if ((media2 >= 9) && (media2 < 10)){
            printf("sua media eh %.2f. nota: A ", media2);
        } else if ((media2 >= 7.5) && (media2 < 9)){
            printf("sua media eh %.2f. nota: B ", media2);
        } else if ((media2 >= 6) && (media2 < 7.5)){
            printf("sua media eh %.2f. nota: C ", media2);
        } else if ((media2 >= 4) && (media2 < 6)){
            printf("sua media eh %.2f. nota: D ", media2);
        } else if (media2 < 4){
            printf("sua media eh %.2f. nota: E ", media2);
        } else {
            printf("coloca uma nota valida ai pf");
        }
    }
}