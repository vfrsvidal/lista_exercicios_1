# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

int inverter(int x){
    int result = 0;
    while(x > 0){
        result *= 10;
        result += x % 10;
        x = x / 10;
    }
    return result;
}

void main(){

    int a;

    printf("Entre com um numero para ser invertido: \n");
    scanf("%d",&a);
    printf("O numero invertido eh: %d",inverter(a));
}
