# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void divisores(){
    int e,x;
    printf("Entre com um numero inteiro positivo: \n");
    scanf("%d",&x);
    for(e=1;e<=x;e++){
        if (x%e == 0){
            printf("%d\n",e);
        }
    }
}

void main (){
    divisores();
}
