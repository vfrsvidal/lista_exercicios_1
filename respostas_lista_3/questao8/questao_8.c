# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void calcular(){
    int x=1,soma=0,soma2=0,contador=0,maior=0,menor=0,contador2=0,c=0;
    while (x!=0){
        printf("Entre com um numero: \n");
        scanf("%d",&x);
        if (c==0){
            maior = x;
            menor = x;
            c += 1;
        }
        soma += x;
        contador++;
        if (x>maior){
            maior = x;
        }
        if ((x<menor)&&(x!=0)){
            menor = x;
        }
        if (x%2 == 0){
            soma2 += x;
            contador2++;
        }
    }
    contador--;
    contador2--;
    printf("A soma dos numeros digitados: %d\n",soma);
    printf("A quantidade de numeros digitados: %d\n",(contador));
    printf("A media dos numeros digitados eh: %.2f\n",((float)soma/contador));
    printf("O maior numero digitado eh: %d\n",maior);
    printf("O menor numero digitado eh: %d\n",menor);
    printf("A media dos numeros pares eh: %d\n",(soma2/contador2));
}

void main(){
    calcular();
}
