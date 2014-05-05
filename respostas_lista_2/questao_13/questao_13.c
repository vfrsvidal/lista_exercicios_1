# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){

    float x;

    printf("Entre com o total do valor vendido: \n");
    scanf("%f",&x);

    if (x>=100000){
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.16)+700));
    } else if ((x<100000) && (x>=80000)) {
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.14)+650));
    } else if ((x<80000) && (x>=60000)) {
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.14)+600));
    } else if ((x<60000) && (x>=40000)) {
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.14)+550));
    } else if ((x<40000) && (x>=20000)) {
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.14)+500));
    } else if (x<20000) {
        printf("A comissao a ser paga eh de: R$ %f\n",((x*0.14)+400));
    }
}
