/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas
oferecendo desconto. Faça um algoritmo que possa entrar com o valor de um produto e imprima o
novo valor tendo em vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.*/

#include <stdio.h>

int main(void)
{
    float produtoValor, desconto;

    do
    {
        printf("Preço do produto: ");
        scanf("%f", &produtoValor);
    }   
    while(produtoValor < 0);

    desconto = produtoValor * 9 / 100;
    produtoValor -= desconto;

    printf("Valor descontado R$%.2f\nNovo Valor do produto R$%.2f\n", desconto, produtoValor);

    return 0;
}