# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

int valor_par(int *v, int tamanho_vetor){
    int e, count = 0;
    for(e=0;e<tamanho_vetor;e++){
        if (v[e]%2 == 0){
            count++;
        }
    }
    return count;
}

void main(){

    int x,e,vetor[total];

    for(e=0;e<total;e++){
        printf("Entre com um numero inteiro: \n");
        scanf("%d",&x);
        vetor[e] = x;
    }
    printf("%d\n",valor_par(vetor,total));
}
