#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL,"portuguese");

    float notas = 0;
    float media = 0;
    int quantidadeDeNotas;
    int contador = 1;
    int soma = 0;
    int i;

    printf("Digite a quantidade de notas que serão escritas: ");
    scanf("%i", &quantidadeDeNotas);

    for ( i = 0; i < quantidadeDeNotas; i++)
    {
        printf("Informe a %i° nota: ",contador);
        scanf("%f", &notas);
        soma += notas; 
        contador++;
    }
        media = soma / quantidadeDeNotas;

        printf("Sua Média é: %.1f",media);
    
    
    return 0;
}