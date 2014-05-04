# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){
    int x;
    float a = 0,b = 0;
    printf("##############################################################\n\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n\n");
    printf("##############################################################\n\n");
    printf("Entre com uma das opcoes acima: \n");
    scanf("%d",&x);

    if (x==4){
        printf("Entre com o numerador: \n");
        scanf("%f",&a);
        printf("Entre com o denominador diferente de 0 (zero): \n");
        scanf("%f",&b);
    } else {
        printf("Entre com o primeiro numero: \n");
        scanf("%f",&a);
        printf("Entre com o segundo numero: \n");
        scanf("%f",&b);
    }

    switch (x){
        case 1:
            printf("A soma dos dois numeros entrados eh: %f\n",(a+b));
            break;
        case 2:
            if (a>b){
                printf("A diferenca entre os numeros (maior pelo menor) eh: %f\n",(a-b));
            } else {
                printf("A diferenca entre os numeros (maior pelo menor) eh: %f\n",(b-a));
            }
            break;
        case 3:
            printf("O produto entre os dois numeros entrados eh: %f\n",(a*b));
            break;
        case 4:
            if (b != 0){
                printf("A divisao entre os dois numeros entrados eh: %f\n",(a/b));
            } else {
                printf("Denominador com valor 0, entrada invalida!\n");
            }
            break;
        default:
            printf("Entrada invalida!\n");
            break;
    }
}
