# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void naturais_impares(int n){
    int count=0, count2=0;
    while(count<n){
        count2++;
        if (!(count2%2 == 0)){
            printf("%d\n",count2);
            count++;
        }
    }
}

void main(){
    naturais_impares(10);
}
