/*3) Faça um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos*/
#include <stdio.h>

int categorias(int idade);

int main(){

    int idade, categoria;

    printf("Entre com a idade do nadador: ");
    scanf("%i", &idade);

    categoria = categorias(idade);

    if(categoria == 1){
        printf("Categoria infantil A = 5 - 7 anos\n");  
    }
    if(categoria == 2){
        printf("Categoria infantil B = 8-10 anos\n");  
    }
    if(categoria == 3){
        printf("Categoria juvenil A = 11-13 anos\n");  
    }
    if(categoria == 4){
        printf("Categoria juvenil B = 14-17 anos\n");  
    }
    if(categoria == 5){
        printf("Categoria Adulto\n");  
    }
    if(categoria == 0){
        printf("Idade invalida para competição!\n");
    }

    return 0;
}

int categorias(int idade){

    if(idade > 4){
        if(idade < 8){
            return 1;
        }
        if(idade < 11){
            return 2;
        }
        if(idade < 14){
            return 3;
        }
        if(idade < 18){
            return 4;
        }
        else{
            return 5;
        }
    }else{
        return 0;
    }

}