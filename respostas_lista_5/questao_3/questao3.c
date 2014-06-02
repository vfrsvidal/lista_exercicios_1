# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

int ordenado(int *x, int *y, int *z){
    int w;
    if (*x == *y == *z){
        return 1;
    } else {       // a ideia aqui eh ordenar os dois primeiros (primeiro if) e depois disso feito, eu vejo se o ultimo vem na
        if(*x>*y){ // frente do primeiro (lembrando que os dois primeiro elementos ja estao ordenados) se sim, eu coloco este
            w=*x;  // na frente (segundo if) e finalizo, pois jah estarah ordenado, se nao, vejo se o ultimo vem na frente do
            *x=*y; // do elemento do meio (terceiro if) e ordeno as posicoes se necessario.
            *y=w;
        }
        if(*z<*x){
            w=*x; // inicio da troca do ultimo elemento com o primeiro
            *x=*z;
            *z=w;
            w=*y; // inicio da troca dos dois ultimos elementos (mesma ideia do bubble sort), necessario!
            *y=*z;
            *z=w; // no final desta condicao terei o ultimo elemento na frente se ele for menor que os dois anteriores
        } else if (*z<*y){
            w=*y;
            *y=*z;
            *z=w;
        }
    }
    return 0;
}

void main(){
    int a,b,c;
    printf("Entre com um valor inteiro:\n");
    scanf("%d",&a);
    printf("Entre com outro valor inteiro:\n");
    scanf("%d",&b);
    printf("Entre com outro valor inteiro:\n");
    scanf("%d",&c);
    ordenado(&a,&b,&c);
    printf("Os valores ordenados sao: %d, %d e %d\n",a,b,c);
}
