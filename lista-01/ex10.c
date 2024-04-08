/*O produto de uma série de termos de uma Progressão Geométrica (P.G.) pode ser calculado
pela fórmula abaixo:
P = a1 ^n * q^n(n-1)/2
Faça um algoritmo para calcular o produto dos termos de uma P.G.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int produto, a1, n, q;

    printf("Entre com o primeiro termo: ");
    scanf("%i", &a1);
    printf("Entre com o numero de termos: ");
    scanf("%i", &n);
    printf("Entre com a razao: ");
    scanf("%i", &q);


    produto = pow(a1, n) * pow(q, n*(n-1)/2);

    printf("Produto dos termos de uma P.G: %i\n", produto);

    return 0;
}