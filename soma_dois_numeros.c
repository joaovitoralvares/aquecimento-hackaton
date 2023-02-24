#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int primeiroNumero = 0, segundoNumero = 0, soma = 0;
    
    printf("Digite o primeiro numero:\n");
    scanf("%i", &primeiroNumero);
    
    printf("Digite o segundo numero:\n");
    scanf("%i", &segundoNumero);

    soma = primeiroNumero + segundoNumero;
    
    printf("SOMA = %i\n", soma);

    return 0;
}