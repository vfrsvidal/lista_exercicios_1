# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

bool se_esta(float *v, int tamanho_vetor, int x){
    int e;
    for (e=0; e<tamanho_vetor; e++){
        if (v[e] == x){
            return true;
        }
    }
    return false;
}

void valores_iguais (float *v, int tamanho_vetor){
    int i,e,c,count=0;
    float v2[tamanho_vetor];
    for (i=0; i<tamanho_vetor; i++){
        for (e=(i+1); e<tamanho_vetor; e++){
            if (v[i]==v[e]){
                if (!(se_esta(v2,count,v[e]))){
                    v2[count] = v[e];
                    count++;
                }
            }
        }
    }
    for (i=0;i<count;i++){
        printf("%f\n",v2[i]);
    }
}

# define total 10

void main(){
    float vetor[total], x;
    int k;

    for (k=0; k<total; k++){
        printf("Entre com um numero real: \n");
        scanf("%f",&x);
        vetor[k] = x;
    }

    valores_iguais(vetor,total);
}
