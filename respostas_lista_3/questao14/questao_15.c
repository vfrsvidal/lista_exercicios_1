# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

float soma(){
    int e;
    float x,som = 0;
    for(e=0;e<10;e++){
        printf("Entre com um valor: \n");
        scanf("%f",&x);
        som += x;
    }
    return som;
}

void main(){
    printf("%f\n",soma());
}
