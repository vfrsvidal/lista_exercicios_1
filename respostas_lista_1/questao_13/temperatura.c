# include <stdio.h>

int main(){

    float F;

    printf("Entre com a temperatura em Fahrenheit:\n");
    scanf("%f",&F);

    printf("A temperatura convertida equivale a %f em graus Celsius.\n",(5*(F-32)/9));

    return 0;
}
