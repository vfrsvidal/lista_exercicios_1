# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

# define dia 30.0

void main(){

    float a;

    printf("Entre com o numero de dias trabalhados: \n");
    scanf("%f",&a);
    printf("O salario ja com imposto de renda (8%%) descontado eh de : R$ %f\n",((dia*a)-((dia*a)*0.08)));
}
