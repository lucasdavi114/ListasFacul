/*Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para
fazer uma viagem até a casa de sua irmã. Faça algoritmo que leia:
 A distância da casa de Maria até sua irmã;
 O consumo do carro de Maria (KM rodados / litro);
 O preço da gasolina (litro).
E mostre as informações que Maria necessita.*/

#include <stdio.h>

float litrosTotais(float dist, float cons);
float valorTotal(float litrosGastos, float precoGas);

int main()
{
    float dist, cons, precoGas, litrosGastos, valorViagem;

    //litrosGastos = dist / cons
    //valorViagem = dist / cons * precoGas

    printf("Distancia da casa de Maria até o destino: ");
    scanf("%f", &dist);
    printf("Consumo do carro de Maria KM/L: ");
    scanf("%f", &cons);
    printf("Preco da Gasolina:R$");
    scanf("%f", &precoGas);

    litrosGastos = litrosTotais(dist, cons);

    valorViagem = valorTotal(litrosGastos, precoGas);

    printf("Serão gastos %.2f L de gasolina;\nValor da Viagem R$ %.2f\n", litrosGastos, valorViagem);

    return 0;
}

float litrosTotais(float dist, float cons)
{
    return dist / cons;
}

float valorTotal(float litrosGastos, float precoGas)
{
    return litrosGastos * precoGas;
}