# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void regressiva(int x){
    while (x>=0){
        printf("%d\n",x);
        x--;
    }
    printf("FIM!\n");
}

void main(){
    regressiva(10);
}
