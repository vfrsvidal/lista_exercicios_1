# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

void mercadoria(){
    char name[50];
    float valor;
    printf("Entre com o nome da mercadoria: \n");
    scanf("%[^\n]s",name);
    flush();
    printf("Entre com o valor da mercadoria: \n");
    scanf("%f",&valor);
    printf("Mercadoria: %s\n",name);
    printf("O valor da mercadoria eh: %.2f\n",valor);
    printf("O valor do desconto eh: %.2f\n",(valor/10));
    printf("Para pagamento a vista o valor fica: %.2f\n",(valor-(valor/10)));
}

void main(){
    mercadoria();
}
