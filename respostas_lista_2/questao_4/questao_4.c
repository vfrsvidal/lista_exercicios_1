# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){

    float a;

    printf("Entre com o seu salario: \n");
    scanf("%f",&a);
    printf("Apos o aumento de 25%% seu salario eh de: R$ %f\n",((a/4)+(a)));
}
