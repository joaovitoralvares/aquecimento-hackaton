#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int lado = 0, area = 0;
    
    printf("Digite o tamanho do lado do quadrado:\n");
    scanf("%i", &lado);

    area = lado * lado;
    
    printf("AREA = %i\n", area);

    return 0;
}