# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){

    float a,b;

    printf("Entre com o salario: \n");
    scanf("%f",&a);

    printf("Entre com a prestacao do emprestimo: \n");
    scanf("%f",&b);

    if (b>(a/5)){
        printf("Emprestimo nao concebido!\n");
    } else {
        printf("Emprestimo concebido!\n");
    }
}
