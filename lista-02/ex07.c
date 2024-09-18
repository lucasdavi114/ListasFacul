/*7) Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O
algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total,
usando a tabela abaixo:
Código do produto Preço unitário
1001                5,40
1324                7,00
6548                2,37
3987                5,32
7623                6,45*/

#include <stdio.h>

float calculaValor();

int main(){

    float total;

    total = calculaValor();

    if(total == 0){
        printf("Codigo invalido para Produto!!\n");
    }else{
        printf("Valor final R$%.2f\n", total);
    }

    return 0;
}

float calculaValor(){
    int cod, qtde;
    float valor;
    
    printf("\t\tProdutos!!\n");
    printf("Codigo produtos\t\tPreco Unitario\n");
    printf("1001\t\tR$5.40\n1324\t\tR$7.00\n6548\t\tR$2.37\n3987\t\tR$5.32\n7623\t\tR$6.45\n");

    printf("Codigo do produto: ");
    scanf("%i", &cod);
    printf("Quantidade: ");
    scanf("%i", &qtde);

    switch (cod)
    {
    case 1001: valor = qtde * 5.4;
        break;
    case 1324: valor = qtde * 7;
        break;
    case 6548: valor = qtde * 2.37;
        break;
    case 3987: valor = qtde * 5.32;
        break;
    case 7623: valor = qtde * 6.45;
        break;
    default:
        valor = 0;
        break;
    }

    return valor;

}