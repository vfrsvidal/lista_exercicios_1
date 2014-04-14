# include <stdio.h>

void main(){

    float peso = 0, excesso = 0, multa = 0;

    printf("Entre com o peso do peixe: \n");
    scanf("%f",&peso);

    if (peso > 50){
        excesso = peso - 50;
        multa = 4*excesso;
    }
    printf("Peso: %f kg\nExcesso de Peso: %f kg\nMulta a pagar: R$%f reais\n",peso,excesso,multa);
}
