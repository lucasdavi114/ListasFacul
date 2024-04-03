/*Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro termo(a1).
Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.A., dado a razão e o
primeiro termo.
an= a1+ (n − 1) × r */

#include <stdio.h>

int calculoProgAlgebrica(int a1, int razao, int tamanho);

int main(void)
{

    int primeiroTermo, razao, termo, tamanho;

    printf("Entre com a razao da P.a: ");
    scanf("%i", &razao);
    printf("Entre com o primeiro Termo: ");
    scanf("%i", &primeiroTermo);
    printf("Tamanho da P.a: ");
    scanf("%i", &tamanho);

    termo = calculoProgAlgebrica(primeiroTermo, razao, tamanho);

    printf("Termo: %i\n", termo);

    return 0;
}

int calculoProgAlgebrica(int a1, int razao, int tamanho)
{
    return a1 + (tamanho -1) * razao;
}