#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Qual a sua idade: ");
    scanf("%d", &idade);
    system("cls||clear");

    if (idade >= 18)
    {
        printf("Acesso permitido");
    }
    else
    {
        printf("Acesso negado");
    }

    return 0;
}
