# include <stdio.h>

int main(){

    float C;

    printf("Entre com a temperatura em Celsius:\n");
    scanf("%f",&C);

    printf("A temperatura convertida equivale a %f em Fahrenheit.\n",((C*1.8)+32));

    return 0;
}
