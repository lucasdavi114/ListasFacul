/*15) Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo para Calcular e
imprimir quantos salários mínimos uma pessoa ganha.*/
#include <stdio.h>

int main(void)
{
    float salario, salarioMin;
    int qntdeSalario;

    do
    {
        printf("Salario minimo atual: ");
        scanf("%f", &salarioMin);

        printf("Salario da pessoa: ");
        scanf("%f", &salario);
    }while(salario <= 0 || salarioMin <= 0);

    qntdeSalario = salario / salarioMin;

    if(qntdeSalario == 1)
    {
        printf("A pessoa ganha %i salario minimo\n", qntdeSalario);
    }else
        if(qntdeSalario > 1)
        {
            printf("A pessoa ganha %i salarios minimos\n", qntdeSalario);
        }
        else
        {
            printf("A pessoa ganha menos de um salario minimo\n");
        }

}