/*Certo dia o professor de Johann Friederich Carl Gauss (aos 10 anos de idade) mandou que os
alunos somassem os números de 1 a 100. Imediatamente Gauss achou a resposta – 5050 –
aparentemente sem cálculos. Supõe-se que já aí, Gauss, houvesse descoberto a fórmula de uma
soma de uma progressão aritmética.

S = ((a1 + an) * n)/2

Construa um algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro a1 e o último
an.*/

#include <stdio.h>

int main(void)
{
    int a1, an, n, somaPa;

    printf("Entre com o primeiro termo: ");
    scanf("%i", &a1);
    printf("Entre com o ultimo termo: ");
    scanf("%i", &an);
    printf("Entre com o numero de termos: ");
    scanf("%i", &n);


    somaPa = ((a1 + an) * n) / 2;

    printf("Soma da P.A: %i\n", somaPa);

    return 0;
}