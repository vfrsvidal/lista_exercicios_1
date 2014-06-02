# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void troca(int *x, int *y){
    int w;
    w = *x;
    *x = *y;
    *y = w;
}

void main(){
    int a,b;
    printf("Entre com um valor inteiro:\n");
    scanf("%d",&a);
    printf("Entre com outro valor inteiro:\n");
    scanf("%d",&b);

    printf("a = %d e b = %d\n",a,b);
    troca(&a,&b);
    printf("a = %d e b = %d\n",a,b);
}
