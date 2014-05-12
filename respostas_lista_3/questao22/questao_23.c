# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

float* no_negativo(float *v, int tamanho_vetor){
    int e;
    for(e=0;e<10;e++){
        if (v[e]<0){
            v[e]=0;
        }
    }
    return v;
}

void main(){

    float vetor[total],x;
    int e;

    for(e=0;e<10;e++){
        printf("Entre com um numero: \n");
        scanf("%f",&x);
        vetor[e] = x;
    }

    no_negativo(vetor,total);

    for(e=0;e<10;e++){
        printf("%f\n",vetor[e]);
    }

}
