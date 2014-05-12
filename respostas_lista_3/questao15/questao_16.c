# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int soma(){
    int e, total = 0;
    for(e=999;e>0;e--){
        if((e%3 == 0) || (e%5 == 0)){
            total += e;
        }
    }
    return total;
}

void main(){
    printf("A soma dos numeros menores que 1000 multiplos de 3 ou 5 eh: %d\n",soma());
}
