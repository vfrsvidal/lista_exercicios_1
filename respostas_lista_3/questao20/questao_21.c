# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 100

int *impar(int *v,int *v2, int tamanho_vetor){
    int e;
    for(e=0;e<tamanho_vetor;e++){
        if (v[e]%2 != 0){
            v2[e] = v[e];
        }
    }
    return v2;
}

void impressao(int *v, int tamanho_vetor){
    int e, count = 0;
    for(e=0;e<tamanho_vetor;e++){
        printf("%d ",v[e]);
        count++;
        if (count == 10){
            printf("\n");
            count = 0;
        }
    }
}

void impressao2(int *v, int tamanho_vetor){
    int e, count = 0;
    for(e=0;e<tamanho_vetor;e++){
        if (v[e]%2 != 0){
        printf("%d ",v[e]);
        count++;
        }
        if (count == 10){
            printf("\n");
            count = 0;
        }
    }
}

void main (){

    int vetor[total],vetor2[total],x,count = 0;


    while (count!= 100){
        do{
        printf("Entre com um numero inteiro no intervalo [0,50]: \n");
        scanf("%d",&x);
        }while (x<0 || x>50);
        vetor[count] = x;
        count++;
    }

    impressao(vetor,total);
    printf("\nAqui estao os impares: \n");
    impressao2(vetor,total);
}
