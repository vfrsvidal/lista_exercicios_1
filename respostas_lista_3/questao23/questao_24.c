# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

float ler(int num){
    int e;
    float x, soma = 0;
    for (e=0;e<num;e++){
        printf("Entre com uma nota: \n");
        scanf("%f",&x);
        soma += x;
    }
    return soma;

}

float media(float soma, float num){
    return (soma/num);
}

# define num 15

void main(){
    printf("a media eh: %f\n",media(ler(num),num));
}
