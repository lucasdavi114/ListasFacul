/*1) Faça um algoritmo para calcular a média aritmética das 3 notas de um aluno e mostrar, além do
valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a
mensagem "reprovado", caso contrário.*/
#include <stdio.h>

#define NUM_NOTAS 3

int calculaMedia(float n1, float n2, float n3);

int main(){

    float nota1, nota2, nota3;

    do
    {
        printf("Digite as notas: ");
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        scanf("%f", &nota3);
    } while (nota1 < 0 || nota2 < 0 || nota3 < 0);
    
    if(calculaMedia(nota1, nota2, nota3)){
        printf("Aprovado!!\n");
    }else{
        printf("Reprovado!\n");
    }

    return 0;
}

int calculaMedia(float n1, float n2, float n3){

    float media = (n1 + n2 + n3) / NUM_NOTAS;

    if(media >= 6){
        return 1;
    }else
        return 0;

}