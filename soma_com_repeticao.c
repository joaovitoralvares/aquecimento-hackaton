#include <stdio.h>
#include <stdlib.h>

int somaComNumeroPositivo(int primeiroNumero, int segundoNumero) {
    int soma = primeiroNumero;

    if (segundoNumero < 0) {
        return somaComNumeroPositivo(segundoNumero, primeiroNumero);
    }

    for (int somador = 0; somador < segundoNumero; somador++) {
        soma++;
    }

    return soma;
}

// possivel somente utilizando o operador de decremento
int somaApenasNegativos(int primeiroNumero, int segundoNumero) {
    int soma = 0;

    for (int somador = primeiroNumero; segundoNumero < 0; segundoNumero++) {
        somador--;
        soma = somador;
    }
}

int main(int argc, char *argv[])
{
   int primeiroNumero = 0, segundoNumero = 0, soma = 0;
    
    printf("Digite o primeiro numero:\n");
    scanf("%i", &primeiroNumero);
    
    printf("Digite o segundo numero:\n");
    scanf("%i", &segundoNumero);

    if (primeiroNumero >= 0 || segundoNumero >= 0) {
        soma = somaComNumeroPositivo(primeiroNumero, segundoNumero);
    } else if (primeiroNumero) {
        soma = somaApenasNegativos(primeiroNumero, segundoNumero);
    }

    printf("SOMA = %i\n", soma);
}