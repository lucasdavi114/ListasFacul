/*4)Faça um algoritmo que leia as três notas de um aluno. Calcular a média ponderada do aluno,
considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostrar a média
calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se
a média for menor que 5.*/

#include <stdio.h>
#define PESO_MAIOR 4.0
#define PESO_MENOR 3.0

float maiorValor(float a, float b, float c);
float mediaNotas(float a, float b, float c, float maior);


int main(){

    float nota1, nota2, nota3, maior, media;

    printf("Entre com a nota 1: ");
    scanf("%f", &nota1);
    printf("Entre com a nota 2: ");
    scanf("%f", &nota2);
    printf("Entre com a nota 3: ");
    scanf("%f", &nota3);

    maior = maiorValor(nota1, nota2, nota3);
    media = mediaNotas(nota1, nota2, nota3, maior);

    if(media >= 5){
        printf("Aprovado!!\nMedia do aluno %.2f\n", media);
    }else{
        printf("Reprovado!!\nMedia do aluno %.2f\n", media);
    }

    return 0;
}
//Função para pegar a maior nota;
float maiorValor(float a, float b, float c){

    float maior = a, media;
    
    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    
    return maior;

}
//calcula a media ponderada das notas
float mediaNotas(float a, float b, float c, float maior){

    float media;

    if(a == maior){
        return (a * PESO_MAIOR + b * PESO_MENOR + c * PESO_MENOR) / (PESO_MAIOR+PESO_MENOR*2);
    }
    if(b == maior){
        return (a * PESO_MENOR + b * PESO_MAIOR + c * PESO_MENOR) / (PESO_MAIOR+PESO_MENOR*2);
    }
    if(c == maior){
        return (a * PESO_MENOR + b * PESO_MENOR + c * PESO_MAIOR) / (PESO_MAIOR+PESO_MENOR*2);
    }

}