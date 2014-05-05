# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){

    float x, y, a, b, total;

    printf("Entre com o horario da chegada: \n");
    printf("hora: ");
    scanf("%f",&x);
    printf("min: ");
    scanf("%f",&y);

    printf("\nEntre com o horario de saida: \n");
    printf("hora: ");
    scanf("%f",&a);
    printf("min: ");
    scanf("%f",&b);

    if (a<x){
        total = ((1440+b+(a*60))-((x*60)+y))/60; // Em horas quando dividido por 60!
    } else {
        total = (((a*60) + b) - ((x*60) + y))/60; // Em horas quando dividido por 60!
    }

    total = ceil(total);

    if (total<=2){
        printf("O total a pagar eh de: R$ %f\n", total*1);
    } else if (total>2 && total <=4){
        printf("O total a pagar eh de: R$ %f\n",(total*1.4));
    } else if (total>4){
        printf("O total a pagar eh de: R$ %f\n",(total*2));
    }
}
