/*17) Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas,
agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts de
energia custa um sétimo do salário mínimo, fazer um algoritmo que calcule e imprima:
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%.*/
#include <stdio.h>

void calculoConta(float salario, float kwCons, float *vKw, float *vPago, float *vDes);

#define DESCONTO 0.9
#define ENERGIA 7

int main(){

    float salario, kw, valorKw, valorpago, valordesconto, kwCons;

    printf("Entre com o salario: ");
    scanf("%f", &salario);
    printf("KW consumidos: ");
    scanf("%f", &kwCons);

    calculoConta(salario, kwCons, &valorKw, &valorpago, &valordesconto);
    

    printf("Preco de cada KW: R$%.2f\nPreço da conta de luz: R$%.2f\nValor com desconto: R$%.2f\n", valorKw, valorpago, valordesconto);

    return 0;
}

//calculo do valor da conta com descontos.
void calculoConta(float salario, float kwCons, float *vKw, float *vPago, float *vDes){

    *vKw = (salario/ENERGIA)/100;
    *vPago = *vKw * kwCons;
    *vDes = *vPago * DESCONTO;

}