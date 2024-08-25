/*18) Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo
para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que
realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de
menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada
fosse R$ 87,00, o algoritmo deveria indicar uma nota de R$ 50,00, 1 nota de R$ 20,00, uma
nota de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um algoritmo que receba o valor da quantia
solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima.
Obs.: Notas disponíveis: R$50,00 , R$20,00, R$10,00, R$5,00 e R$1,00*/
#include <stdio.h>

int retornaSaque(int saque, int *n50, int *n20, int *n10, int *n5, int *n1);

int main(){

    int saque; 
    int notas50, notas20, notas10, notas5, notas1;

    printf("Digite o valor a ser sacado, So valores inteiros: ");
    scanf("%i", &saque);

    if(retornaSaque(saque, &notas50, &notas20, &notas10, &notas5, &notas1)){
        printf("Notas de 50: R$%i\n", notas50);
        printf("Notas de 20: R$%i\n", notas20);
        printf("Notas de 10: R$%i\n", notas10);
        printf("Notas de 5: R$%i\n", notas5);
        printf("Notas de 1: R$%i\n", notas1);
    }else{
        printf("Valor Invalido!\n");
    }


    return 0;
}

int retornaSaque(int saque, int *n50, int *n20, int *n10, int *n5, int *n1){

    if(saque > 0){

        *n50 = saque/50;
        saque = saque % 50;
        *n20 = saque / 20;
        saque = saque % 20;
        *n10 = saque / 10;
        saque = saque % 10;
        *n5 = saque / 5;
        saque = saque % 5;
        *n1 = saque;

        return 1;
    }else{
        return 0;
    }
}