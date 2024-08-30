/*O cardápio de uma lanchonete é o seguinte:
Código      Especificação       Preço unitário
100         Pastel              2,5
101         Bauru simples       3,20
102         Bauru c/ovo         3,5
103         Hamburger           4,10
104         Cheeseburger        6,0
105         Refrigerante        2,0
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago
por aquele lanche. Considere que a cada execução somente será calculado um item.*/

#include <stdio.h>
 
#define PASTEL 2.5
#define BAURU_1 3.2
#define BAURU_2 3.5
#define HAMBURGER 4.1
#define CHEESEBURGER 6.0
#define REFRIGERANTE 2.0

void cardapio();
float valorPrato(int cod, int qtde);

int main(){

    cardapio();


    return 0;
}

void cardapio(){
    int cod, qtde;
    float valor;
    printf("Código\t\tEspecificação \t\tPreço unitário\n");
    printf("100\t\tPastel\t\t\tR$2,50\n");
    printf("101\t\tBauru simples\t\tR$3,20\n");
    printf("102\t\tBauru c/ovo\t\tR$3,50\n");
    printf("103\t\tHamburger\t\tR$4,10\n");
    printf("104\t\tCheeseburger\t\tR$6,00\n");
    printf("105\t\tRefrigerante\t\tR$2,00\n");

    printf("Escolha um prato digitando o codigo dele: ");
    scanf("%i", &cod);
    printf("Quantos voce quer: ");
    scanf("%i", &qtde);

    valor = valorPrato(cod, qtde);

    if(valor != 0){
        printf("Valor: R$ %.2f\n", valor);
    }

}

float valorPrato(int cod, int qtde){

    switch (cod)
    {
    case 100:return PASTEL * qtde;break;
    case 101:return BAURU_1 * qtde;break;
    case 102:return BAURU_2 * qtde;break;
    case 103:return HAMBURGER * qtde;break;
    case 104:return CHEESEBURGER * qtde;break;
    case 105:return REFRIGERANTE * qtde;break;
    default:printf("Opcao invalida!!\n");break;
    }

    return 0;

}