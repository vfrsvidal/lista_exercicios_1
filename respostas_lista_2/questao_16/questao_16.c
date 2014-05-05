# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <math.h>

void main(){

    float h;
    char x[10];

    printf("Entre com sua altura em metros: \n");
    scanf("%f",&h);
    printf("Entre com seu sexo (masculino ou feminino): \n");
    scanf("%s",&x);

    /* Lembrar que a funcao strcmp tem que ser comparada a 0 porque quando eh True a comparacao, ela retorna falso
    e 0 eh igual a falso*/

    if (strcmp(x, "masculino") == 0){
        printf("Seu peso ideal eh: %f\n",((72.7*h)-58));
    } else if (strcmp(x, "feminino") == 0){
        printf("Seu peso ideal eh: %f\n",((62.1*h)-44.7));
    } else {
        printf("O valor inserido eh invalido!\n");
    }
}
