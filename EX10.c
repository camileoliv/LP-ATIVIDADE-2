#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numeroUm, numeroDois, resultado;
    int operacao ;

    printf("Digite o primeiro n�mero para o calculo: ");
    scanf("%d",&numeroUm);

    printf("Digite o segundo n�mero para o calculo: ");
    scanf("%d",&numeroDois);

    printf("Digite o c�digo da opera��o desejada \n");
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplica��o \n");
    printf("4- Divis�o \n");
    scanf("%i",&operacao);

    system("cls || clear");
    
    switch (operacao)
    {
    case 1:
    resultado = numeroUm + numeroDois;
    break;
    
    case 2:
    resultado = numeroUm - numeroDois;
    break;

    case 3:
    resultado = numeroUm * numeroDois;
    break;

    case 4:
    resultado = numeroUm / numeroDois;
    break;
    
    default:
    printf("Opera��o inv�lida!");
        break;
    }

    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplica��o \n");
    printf("4- Divis�o \n");
    printf("C�digo da opera��o escolhida: %i \n",operacao);
    printf("Resultado: %i \n",resultado);

    return 0; 
    }