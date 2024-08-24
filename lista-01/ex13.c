/*16) Faça um algoritmo que efetue o cálculo da quantidade de litros de combustível gastos em uma
viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na
viagem e a velocidade média.
Distância = Tempo x Velocidade.
Litros = Distancia / 12.
O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de Litros
utilizados na viagem.*/

#include <stdio.h>
#define CONSUMO 12

int main(){

    float dist, tempo, velocidade, litros;

    printf("Entre com o tempo de viagem em horas: ");
    scanf("%f", &tempo);

    printf("Entre com a velocidade media durante a viagem: ");
    scanf("%f", &velocidade);

    dist = tempo * velocidade;

    litros = dist / CONSUMO;

    printf("Distancia: %.1fKM\nLitros: %.2fL.\n", dist, litros);

    return 0;
}