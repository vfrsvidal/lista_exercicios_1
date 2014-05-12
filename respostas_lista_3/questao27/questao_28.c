# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void vectorizar (float *v, int nelems, int b){
    int e;
    if (b == 1){
        for (e=0; e<nelems; e++){
            printf("\n%f\n",v[e]);
        }
    } else if (b == 2){
        for (nelems; nelems> 0; nelems--){
            printf("\n%f\n",v[nelems-1]);
        }
    } else {
        printf("\nO codigo de entrada eh invalido!\n");
    }
}

# define total 5

void main (){

    float vetor[total], x;
    int i = 0, codigo = 0;

    for (i; i<total; i++){
        printf("Entre com um numero real: \n");
        scanf("%f",&x);
        vetor[i] = x;
    }

    printf("Entre com o codigo para a operacao: \n");
    scanf("%d",&codigo);

    vectorizar(vetor,total,codigo);
}
