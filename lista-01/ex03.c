/*Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês.*/

#include <stdio.h>

float calculoSalario(float salarioHora, float horasTrabalhadas);

int main(void)
{
    float salarioHora, salarioTotal;
    int horasTrabalhadas;

    printf("Salario por Hora: ");
    scanf("%f", &salarioHora);
    printf("Horas trabalhadas: ");
    scanf("%i", &horasTrabalhadas);

    salarioTotal = calculoSalario(salarioHora, horasTrabalhadas);

    printf("Salario Total no mês R$%.2f\n", salarioTotal);

    return 0;
}

float calculoSalario(float salarioHora, float horasTrabalhadas)
{   
    return salarioHora * horasTrabalhadas;
}