# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

float soma_quadrados(float x, float y, float z){
    return (x*x)+(y*y)+(z*z);
}

void main(){

    float a, b, c;

    printf("Entre com um numero: \n");
    scanf("%f",&a);
    printf("Entre com um numero: \n");
    scanf("%f",&b);
    printf("Entre com um numero: \n");
    scanf("%f",&c);

    printf("A soma do quadrado dos tres numeros eh: %f",soma_quadrados(a,b,c));
}
