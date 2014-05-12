# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

void main(){

    int A[total], B[total], C[total];
    int e,x;

    for(e=0;e<total;e++){
        printf("Entre com um numero inteiro para o array A: \n");
        scanf("%d",&x);
        A[e]=x;
    }
    for(e=0;e<total;e++){
        printf("Entre com um numero inteiro para o array B: \n");
        scanf("%d",&x);
        B[e]=x;
    }
    for(e=0;e<total;e++){
        C[e]=A[e]-B[e];
        printf("\n%d\n",C[e]);
    }
}
