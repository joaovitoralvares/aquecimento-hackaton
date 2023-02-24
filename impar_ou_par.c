#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero = 0;

    printf("Digite um numero:\n");
    scanf("%i", &numero);

    if (numero % 2 == 0) {
        printf("%i e par\n", numero);
    } else {
        printf("%i e impar\n", numero);
    }

    return 0;
}