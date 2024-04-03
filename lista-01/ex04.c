/*Faça um algoritmo ara resolver um sistema de equações do primeiro grau.*/

#include <stdio.h>

int crammer(float a, float b, float c, float d, float e, float f, float *det, float *detx, float *dety);

int main(void)
{
    float a, b, c, d, e, f, det, detx, dety, x, y;
    int resolucao;
    /*Exemplo da função
    ax + by = e
    cx + dy = f*/
    printf("Primeira Função:\n");
    printf("Numero com x: ");
    scanf("%f", &a);
    printf("Numero com y: ");
    scanf("%f", &b);
    printf("Resultado: ");
    scanf("%f", &e);

    printf("Segunda Função:\n");
    printf("Numero com x: ");
    scanf("%f", &c);
    printf("Numero com y: ");
    scanf("%f", &d);
    printf("Resultado: ");
    scanf("%f", &f);

    resolucao = crammer(a, b, c, d, e, f, &det, &detx, &dety);

    if(resolucao)
    {
        x = detx / det;
        y = dety / det;

        printf("Solução:\n");
        printf("x: %.2f, y: %.2f\n", x, y);
    }
    else
        printf("Funcao Inválida!!\n");

    return 0;
}

int crammer(float a, float b, float c, float d, float e, float f, float *det, float *detx, float *dety)
{
    *det = a * d - b * c;
    *detx = e * d - b * f;
    *dety = a * f - c * e;

    if(*det == 0)
    {
        return 0;
    }
    else 
        return 1;

}