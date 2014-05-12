# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int naturais_pares(int n){
    int count=0, count2=0, soma=0;
    while(count<n){
        //count2++;
        if (count2%2 == 0){
            soma += count2;
            count++;
        }
        count2++; //para somar o zero (0) também!
    }
    return soma;
}

void main(){
    printf("%d\n",naturais_pares(50));
}
