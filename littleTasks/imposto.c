/*Exercício 3: Cálculo de Imposto de Renda Retido na Fonte (IRRF)
Escreva um programa que receba o salário bruto de um funcionário. O programa deve calcular o
imposto de renda devido com base nas seguintes faixas progressivas:
• Até R$ 2.000,00: Isento (0% de imposto).
• De R$ 2.001,00 a R$ 4.000,00: 15% sobre a parcela que exceder R$ 2.000,00.
• Acima de R$ 4.000,00: 22.5% sobre a parcela que exceder R$ 4.000,00 + o imposto fixo da
faixa anterior (R$ 300,00).
Ao final, exiba de forma organizada: o salário bruto, o valor exato do imposto retido e o salário
líquido resultante. */

#include <stdio.h>

int main()
{
    float salarioInput;
    float imposto;
    float salarioLiquido;

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioInput);

    if (salarioInput <= 2000)
    {
        imposto = 0;
    }
    else if (salarioInput <= 4000)
    {
        imposto = (salarioInput - 2000) * 0.15;
    }
    else
    {
        imposto = (salarioInput - 4000) * 0.225 + 300;
    }
    salarioLiquido = salarioInput - imposto;
    printf("seu salario bruto eh: R$ %.2f, o valor do imposto retido eh: R$ %.2f e o salario liquido eh: R$ %.2f", salarioInput, imposto, salarioLiquido);
}