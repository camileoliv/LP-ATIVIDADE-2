#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int temperatura;

    printf("Insira a temperatura da sua GPU: ");
    scanf("%d", &temperatura);

    if (temperatura > 25) 
    {
        printf("O clima é ensolarado!");
    } 
    else if (temperatura < 15) 
    {
        printf("O clima será chuvoso!");
    } 
    else 
    {
	 printf("O clima será nublado!");
    }
    
    return 0;
}