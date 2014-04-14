# include <stdio.h>
# include <math.h>

void main(void){

    int num1, num2;
    float num3, result;

    printf("Entre com o primeiro numero inteiro: \n");
    scanf("%d",&num1);

    printf("Entre com o segundo numero inteiro: \n");
    scanf("%d",&num2);

    printf("Entre com o primeiro numero real: \n");
    scanf("%f",&num3);

    result = (float)num2;
    result = (num1*2)*(result/2);

    printf("O produto do dobro do primeiro com metade do segundo eh: %f\n",result);
    printf("A soma do triplo do primeiro com o terceiro: %f\n",((3*num1)+(num3)));
    printf("O terceiro elevado ao cubo: %f\n",(pow(num3,3)));

}
