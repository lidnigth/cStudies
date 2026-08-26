/* Exercício 5: Conversor de Tempo Complexo

Crie um programa que leia um valor inteiro correspondente a uma quantidade total de segundos.
O programa deve realizar as conversões necessárias e exibir essa quantidade exata fragmentada
no padrão: Semanas, Dias, Horas, Minutos e Segundos.

Exemplo: Se o usuário digitar um valor alto de segundos, o sistema deve dizer exatamente
quantas semanas inteiras cabem ali, quantos dias restaram, quantas horas, minutos e, por fim, os
segundos restantes. */

#include <stdio.h>

int main()
{
    int number;
    int weeks;
    int days;
    int hours;
    int minutes;
    int seconds;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    weeks = number / 604800;
    number %= 604800;

    days = number / 86400;
    number %= 86400;

    hours = number / 3600;
    number %= 3600;

    minutes = number / 60;
    number %= 60;

    seconds = number;

    printf("O tempo convertido eh: %d semanas, %d dias, %d horas, %d minutos e %d segundos", weeks, days, hours, minutes, seconds);
}