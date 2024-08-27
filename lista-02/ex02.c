/*2) Faça um algoritmo que tenha como entrada 3 valores a,b,c e os imprima em ordem crescente.*/
#include <stdio.h>

int main(){

    int a, b, c, aux;

    printf("Entre com o valor de de a: ");
    scanf("%i", &a);
    printf("Entre com o valor de de b: ");
    scanf("%i", &b);
    printf("Entre com o valor de de c: ");
    scanf("%i", &c);

    if(b < a){
        aux = b;
        b = a;
        a = aux;
    }
    if(c < a){
        aux = c;
        c = a;
        a = aux;
    }
    if(c < b){
        aux = c;
        c = b;
        b = aux;
    }

    printf("%i, %i, %i\n", a, b, c);

    return 0;
}