/*2) Faça um algoritmo que tenha como entrada 3 valores a,b,c e os imprima em ordem crescente.*/
#include <stdio.h>

void ordenaNum(int *a, int *b, int *c);

int main(){

    int a, b, c;

    printf("Entre com o valor de de a: ");
    scanf("%i", &a);
    printf("Entre com o valor de de b: ");
    scanf("%i", &b);
    printf("Entre com o valor de de c: ");
    scanf("%i", &c);

    ordenaNum(&a, &b, &c);

    printf("%i, %i, %i\n", a, b, c);

    return 0;
}

void ordenaNum(int *a, int *b, int *c){
    int aux;
    if(*b < *a){
        aux = *b;
        *b = *a;
        *a = aux;
    }
    if(*c < *a){
        aux = *c;
        *c = *a;
        *a = aux;
    }
    if(*c < *b){
        aux = *c;
        *c = *b;
        *b = aux;
    }

}