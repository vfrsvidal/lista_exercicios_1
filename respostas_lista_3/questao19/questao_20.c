# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

int *criarvetor(int *v,int total_elementos){
    int e,x;
    for(e=0;e<10;e++){
        printf("Entre com um numero: \n");
        scanf("%d",&x);
        v[e] = x;
    }
}

void impressao(int *v, int tamanho_vetor){
    int e;
    for(e=0;e<tamanho_vetor;e++){
        printf("%d\n",v[e]);
    }
}

void maior(int *v, int tamanho_vetor){
    int e, maior = v[0], posi = 0;
    for(e=1;e<tamanho_vetor;e++){
        if (v[e]>maior){
            maior = v[e];
            posi = e;
        }
    }
    printf("O maior valor eh: %d\n",maior);
    printf("e sua posicao eh: %d\n",posi);
}

void main(){
    int vetor[total];
    criarvetor(vetor,total);
    impressao(vetor,total);
    maior(vetor,total);

}
