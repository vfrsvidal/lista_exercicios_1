# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

float imc(float h, float p){
    return (p/(h*h));
}

void main(){

    float x,y,calc;

    printf("Entre com sua altura em metros: \n");
    scanf("%f",&x);
    printf("Entre com seu peso em kg: \n");
    scanf("%f",&y);

    calc = imc(x,y);

    if (calc<=18.5){
        printf("Abaixo do Peso! [%f] \n",calc);
    } else if (calc<=24.9) {
        printf("Saudavel! [%f] \n",calc);
    } else if (calc<=29.9){
        printf("Peso em excesso! [%f] \n",calc);
    } else if (calc<=34.9){
        printf("Obesidade Grau I! [%f] \n",calc);
    } else if (calc<=39.9){
        printf("Obesidade Grau II (Severa)! [%f] \n",calc);
    } else {
        printf("Obesidade Grau III (Morbida)! [%f] \n",calc);
    }
}
