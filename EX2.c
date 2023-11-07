#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int dia;
    float valor;
    float valorD;
    float valorF;

    printf("Qual dia da semana você deseja fazer a compra? \n");
    scanf("%d", &dia);
    system("cls||clear");

    printf("Qual o valor da sua compra? \n");
    scanf("%f", &valor);
    system("cls||clear");

    if (valor > 100)
    {
        if (dia >= 2 && dia <= 5)
        {
            valorD = (valor)*10 / 100;
            valorF = valor - valorD;

            printf("Valor original: %.2f\n", valor);
            printf("Valor descontado: %.2f\n", valorD);
            printf("Valor final: %.2f", valorF);
        }
        else
        {
            valorD = (valor)*15 / 100;
            valorF = valor - valorD;

            printf("Valor original: %.2f\n", valor);
            printf("Valor descontado: %.2f\n", valorD);
            printf("Valor final: %.2f", valorF);
        }
    }
    else
    {
        printf("Valor final: %.2f", valor);
    }

    return 0;
}
