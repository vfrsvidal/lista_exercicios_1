# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){

    int a, b, c;
    int x;

    printf("Entre com o primeiro numero para a media: \n");
    scanf("%d",&a);
    printf("Entre com o segundo numero para a media: \n");
    scanf("%d",&b);
    printf("Entre com o terceiro numero para a media: \n");
    scanf("%d",&c);

    printf("\n##############################################################\n\n");
    printf("1- Media Geometrica.\n");
    printf("2- Media Ponderada.\n");
    printf("3- Media Harmonica.\n");
    printf("4- Media Aritmetica.\n\n");
    printf("##############################################################\n\n");
    printf("Entre com uma das opcoes acima: \n\n");
    scanf("%d",&x);

    switch(x){
        case 1:
            printf("A Media Geometrica eh: %f\n",cbrt(((float)a*(float)b*(float)c)));
            break;
        case 2:
            printf("A Media Ponderada eh: %f\n",(((float)a+(2*(float)b)+(3*(float)c))/6));
            break;
        case 3:
            printf("A Media Harmonica eh: %f\n",(1/((1/(float)a)+(1/(float)b)+(1/(float)c))));
            break;
        case 4:
            printf("A Media Aritmetica eh: %f\n",(((float)a+(float)b+(float)c)/3));
            break;
        default:
            printf("Entrada invalida!.");
            break;
    }
}
