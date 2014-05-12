# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int fibonacci(int x){
    int u1=0,u2=1,aux, total = 0;
    while (u2 <= x){
        aux = u2;
        u2 = u1 + u2;
        u1 = aux;
        if (u2%2 == 0){
            total += u2;
        }
    }
    return total;
}

void main(){
    printf("A soma dos numeros pares da sequencia de fibonacci ate 4000000 eh: %d \n",fibonacci(4000000));
}
