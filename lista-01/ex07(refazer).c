/*Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa
um algoritmo que leia este número e apresente o algarismo correspondente à casa das centenas.*/

#include <stdio.h>

int main(void)
{
    int placa, numeroCentenas;

    printf("Entre com os 4 numeros da placa: ");
    scanf("%d", &placa);

    if(placa < 1000){
        numeroCentenas = placa / 100;
    }
    else{
        numeroCentenas = placa % 1000;
        numeroCentenas /= 100;
    }
    printf("Valor dos numeros da centenas: %i\n", numeroCentenas);

    return 0;
}