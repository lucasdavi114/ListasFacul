/*Faça um algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de
minutos se passaram desde o início do dia.*/

#include <stdio.h>

int main(void)
{
    int hora, minutos, minutosTotais;

    do
    {
        printf("Entre com as horas no modelo hh:mm ");
        scanf("%i:%i", &hora, &minutos);

    } while (hora > 23 || minutos > 59);
    
    minutosTotais = hora*60;
    minutosTotais += minutos;

    printf("Se passaram %i minutos desde 00:00\n", minutosTotais);

}