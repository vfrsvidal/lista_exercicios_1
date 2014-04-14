# include <stdio.h>

int main(){

    float raio, pi = 3.141592;

    printf("Entre com o valor do raio: \n");
    scanf("%f",&raio);

    printf("A area do circulo eh: %f u.a.\n",((raio*raio)*pi));

    return 0;
}
