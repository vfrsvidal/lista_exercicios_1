# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 11

void ordenado(float *v, int tamanho_vetor){
    float v2[tamanho_vetor];
    int e, i, count=0;
    for(e=0;e<tamanho_vetor;e++){
        for(i=0;i<tamanho_vetor;i++){
            if (v[e]>v[i])
                count++;
        }
        v2[count] = v[e];
        count = 0;
    }
    for(i=0;i<tamanho_vetor;i++){
        printf("%f\n",v2[i]);
    }
}

void main(){

    float vetor[total], x;
    int k;

    for (k=0;k<total;k++){
        printf("Entre com um numero real para o vetor: \n");
        scanf("%f",&x);
        vetor[k] = x;
    }

    ordenado(vetor,total);
}
