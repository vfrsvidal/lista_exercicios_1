# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

bool primo(int x){
    int e;
    for (e=1;e<x;e++){
        if ((e!=1) && (x%e==0)){
            return false;
        }
    }
    return true;
}

void main(){
    if (primo(21)){
        printf("Eh!");
    } else {
        printf("Nao eh!");
    }
}
