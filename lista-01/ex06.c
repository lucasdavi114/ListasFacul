/*Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro termo
(a1). Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.G., dado a
razão e o primeiro termo.
an = a1 × q^( n −1)*/

#include <stdio.h>
#include <math.h>

float calculoPG(float q, float a1, float n);

int main(void)
{
    float razao, primeiroTermo, nTermo, valor;

    printf("Entre com a razao da P.G: ");
    scanf("%f", &razao);
    printf("Entre com o primeiro termo: ");
    scanf("%f", &primeiroTermo);
    printf("Entre com o valor buscado: ");
    scanf("%f", &valor);

    nTermo = calculoPG(razao, primeiroTermo, valor);

    printf("Valor procurado: %.2f\n", nTermo);

    return 0;
}

float calculoPG(float q, float a1, float n)
{
    return a1 * pow(q, (n-1));
}