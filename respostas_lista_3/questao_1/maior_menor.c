# include <stdio.h>

/* Elabore um programa que faça leitura de varios numeros inteiros, ate que e digite um numero negativo.
O programa tem que retornar o maior e o menor numero lido.*/

void main(){

    float x, y, atual;

    printf("Entre com um numero: \n");
    scanf("%f", &atual);
    x = y = atual;

    while (atual >= 0){
        printf("Entre com um numero: \n");
        scanf("%f", &atual);
        if (atual >= 0){
            if (atual > x){
                x = atual;
            }
            if (atual < y){
                y = atual;
            }
        }
    }

    printf("Voce entrou com um numero negativo, o maior numero entrado eh: %f. O menor eh: %f.\n",x,y);
}
