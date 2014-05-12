# include <stdio.h>

void main(){

    int u1 = 0, u2 = 1, aux, limite;

    printf("Entre com um numero inteiro limite: \n");
    scanf("%d", &limite);

    printf("\n%d ",u1);
    printf("%d ",u2);

    while (u2 <= limite){
        aux = u2;
        u2 = u1 + u2;
        u1 = aux;
        printf("%d ",u2);
    }
    printf("\n");
}
