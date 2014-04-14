# include <stdio.h>

void main(){

    float h, result, peso;
    char x[10];

    printf("Entre com seu sexo (masculino ou feminino): \n");
    scanf("%s",&x);

    printf("Entre com sua altura em metros: \n");
    scanf("%f",&h);

    /* Lembrar que a funcao strcmp tem que ser comparada a 0 porque quando eh True a comparacao, ela retorna falso
    e 0 eh igual a falso*/

    if (strcmp(x, "masculino") == 0){
        result = ((72.7*h)-58);
        printf("Entre com seu peso atual: \n");
        scanf("%f",&peso);
        printf("Seu peso ideal eh: %f\n",result);
        if (peso > (result+1)){
            printf("Voce esta acima do peso!\n");
        } else if (peso < (result-1)) {
            printf("Voce esta abaixo do peso!\n");
        } else {
            printf("Voce esta dentro do peso (tolerancia de 1kg para mais ou para menos)!\n");
        }
    } else if (strcmp(x, "feminino") == 0){
        result = ((62.1*h)-44.7);
        printf("Entre com seu peso atual: \n");
        scanf("%f",&peso);
        printf("Seu peso ideal eh: %f\n",result);
        if (peso > (result+1)){
            printf("Voce esta acima do peso!\n");
        } else if (peso < (result-1)) {
            printf("Voce esta abaixo do peso!\n");
        } else {
            printf("Voce esta dentro do peso (tolerancia de 1kg para mais ou para menos)!\n");
        }
    } else {
        printf("O valor inserido eh invalido!\n");
    }
}
