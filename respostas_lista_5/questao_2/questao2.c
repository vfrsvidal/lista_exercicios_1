# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void maiores(int *x, int *y){
    int w;
    if(*y>*x){
        w=*x;
        *x=*y;
        *y=w;
    }
}

void main(){
    int a,b;
    printf("Entre com um valor inteiro:\n");
    scanf("%d",&a);
    printf("Entre com outro valor inteiro:\n");
    scanf("%d",&b);
    maiores(&a,&b);
    printf("O maior eh %d e o segundo maior eh %d\n",a,b);
}
