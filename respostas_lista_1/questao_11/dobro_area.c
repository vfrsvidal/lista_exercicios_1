# include <stdio.h>

int main(){

    float num, area;

    printf("Entre com o valor de um lado do quadrado: \n");
    scanf("%f",&num);

    area = num*num;

    printf("O dobro da area deste quadrado eh: %f\n",(area*2));

    return 0;
}
