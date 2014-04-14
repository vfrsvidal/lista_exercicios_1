# include <stdio.h>

int main(){

    float sal,h;

    printf("Quanto voce ganha por hora trabalhada?\n");
    scanf("%f",&sal);

    printf("Quantas horas voce trabalhou durante o mes?\n");
    scanf("%f",&h);

    printf("Seu salario equivale a: %f\n",(sal*h));

    return 0;
}
