# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

float hipotenusa(float a, float b){
    return (sqrt((a*a)+(b*b)));
}

void main(){

    float a, b;

    printf("Entre com um cateto do triangulo: \n");
    scanf("%f",&a);
    printf("Entre com o outro cateto do triangulo: \n");
    scanf("%f",&b);
    printf("A hipotenusa vale: %f u.c\n",hipotenusa(a,b));
}
