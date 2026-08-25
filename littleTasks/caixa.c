/* Exercício 2: Caixa Eletrônico (Cálculo de Cédulas)
Desenvolva um programa que simule o saque de um caixa eletrônico. O usuário deve digitar um
valor inteiro a ser sacado. O programa deve calcular e exibir a menor quantidade possível de
notas de R$ 50, R$ 20, R$ 10 e R$ 5 necessárias para compor esse valor.

Exemplo: Se o usuário pedir R$ 85, o programa deve informar: 1 nota de R$ 50, 1 nota de R$ 20,
1 nota de R$ 10 e 1 nota de R$ 5. Caso o valor digitado não possa ser sacado com as notas
disponíveis (ex: R$ 3), exiba uma mensagem de erro */

// rodar o codigo em c:
// gcc .\nome do arquivo.c -o nome do arquivo
// .\nome da arquivo

// &d eh o buraco pra int
// %s eh o buraco pra string -> tipo "%d %s de R$ 50\n", notas50, (notas50 == 1) ? "nota" : "notas");
// & aponta onde a variavel deve ser amarzenada (procura o armario vazio)

#include <stdio.h>

int main()
{
    int valor;
    int notas50;
    int notas20;
    int notas10;
    int notas5;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    if (valor % 5 == 0)
    {

        notas50 = valor / 50;
        valor %= 50;

        notas20 = valor / 20;
        valor %= 20;

        notas10 = valor / 10;
        valor %= 10;

        notas5 = valor / 5;
        valor %= 5;

        printf("Toma, vou te dar ");
        if (notas50 > 0)
        {
            printf("%d nota de R$ 50, ", notas50);
        }
        if (notas20 > 0)
        {
            printf("%d nota de R$ 20, ", notas20);
        }
        if (notas10 > 0)
        {
            printf("%d nota de R$ 10, ", notas10);
        }
        if (notas5 > 0)
        {
            printf("%d nota de R$ 5, seja feliz com o que tem kkkkk", notas5);
        }
        else
        {
            printf("seja feliz com o que tem kkkkk");
        }
    }
    else
    {
        printf("Errous.. provavelmente nao temos notas para esse valor ai kkkkk");
    }
}
