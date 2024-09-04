/*6) Faça um algoritmo para calcular as raízes de uma esquação do segundo grau.*/

#include <stdio.h>
#include <math.h>


float calculaRaizes(float a, float b, float c, float *x1, float *x2);

int main(){

    float a, b, c, x1, x2;

    printf("Entre com o valor de a: ");
    scanf("%f", &a);
    printf("Entre com o valor de b: ");
    scanf("%f", &b);
    printf("Entre com o valor de c: ");
    scanf("%f", &c);

    if(calculaRaizes(a, b, c, &x1, &x2) == 1){
        printf("x1: %.2f\nx2: %.2f\n", x1, x2);
    }else{
        printf("Não existem raizes para esta equação!\n");
    }

    return 0;
}

float calculaRaizes(float a, float b, float c, float *x1, float *x2){
    float delta;

    delta = (b*b) - (4 * a * c);
    delta = sqrt(delta);
    if(delta >= 0){
        *x1 = (-1*b + delta)/(2*a);
        *x2 = (-1*b - delta)/(2*a);
        return 1;
    }else{
        return 0;
    }

}