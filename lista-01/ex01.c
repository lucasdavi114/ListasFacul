/*Faça um algoritmo que leia uma temperatura em graus Fahrenheit e converta / mostre em graus
centígrados.
Centígrados = (Fahrenheit – 32) * 5 / 9.*/

#include <stdio.h>

float converterFahtoCen(float tempF);

int main(void)
{
    float tempF, tempC;
    printf("Choose a temperature in Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = converterFahtoCen(tempF);

    printf("ºF: %.2f, ºC: %.2f\n", tempF, tempC);

    return 0;
}

float converterFahtoCen(float tempF)
{
    float tempC;

    return tempC = (tempF - 32) * 5 / 9;

}