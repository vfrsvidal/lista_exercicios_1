# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void main(){
    float x, y;

    printf("Entre com a idade do trabalhador: \n");
    scanf("%f",&x);

    printf("Entre com o tempo de servico do trabalhador: \n");
    scanf("%f",&y);

    if ((x>=65)||(y>=30)||((x>=60)&&(y>=25))){
        printf("O trabalhador pode se aposentar!\n");
    } else {
        printf("O trabalhador ainda nao pode se aposentar!\n");
    }
}
