#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("Excelente");
    }

    if (nota >= 7 && nota <= 8.9)
    {
        printf("Bom");
    }

    if (nota >= 5 && nota <= 6.9)
    {
        printf("Razoavel");
    }

    if (nota < 5)
    {
        printf("Insuficiente");
    }

    return 0;
}
