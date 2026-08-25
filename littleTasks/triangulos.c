// rodar o codigo em c:
// gcc .\nome do arquivo.c -o nome do arquivo
// .\nome da arquivo

// &d eh o buraco pra int
// %s eh o buraco pra string -> tipo "%d %s de R$ 50\n", notas50, (notas50 == 1) ? "nota" : "notas");
// %c eh o buraco pra caractere
// %f eh o buraco pra float
// %.2f ele limita com duas casas decimais depois da virgula
// %2f ele vai deixar duas casas decimais antes da virgula
// & aponta onde a variavel deve ser amarzenada (procura o armario vazio)

#include <stdio.h>

int main()
{
    int lado1;
    int lado2;
    int lado3;

    printf("Digite o lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o lado 2: ");
    scanf("%d", &lado2);

    printf("Digite o lado 3: ");
    scanf("%d", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado3 + lado2 > lado1))
    {

        if ((lado1 == lado2) && (lado2 == lado3))
        {
            printf("O triangulo eh equilatero");
        }
        else if ((lado1 == lado3) || (lado1 == lado2) || (lado2 == lado3))
        {
            printf("O triangulo eh isosceles");
        }
        else
        {
            printf("O triangulo eh escaleno");
        }
    }
    else
    {
        printf("Nao eh triangulo");
    }
}
