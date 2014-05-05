# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

int intervalo(){
    int p = 0;
    while (!(p)){
        p = rand() % 100;
    }
    return p;
}

void main(){

    int x, y, resposta, count, acertos = 0, erros = 0;

    srand(time(NULL));

    printf("Este sistema eh automatizado, voce apenas precisa entrar com a resposta correta!\n");
    printf("Se prepare e boa sorte!\n\n");
    for (count = 0; count <5; count++){
        x = intervalo();
        y = intervalo();
        printf("Qual o resultado da soma entre %d e %d?\n\n",x,y);
        scanf("%d",&resposta);
        if (resposta == (x+y)){
            printf("Parabens, voce acertou!\n\n");
            acertos += 1;
        } else {
            printf("Que pena voce errou! A resposta correta eh: %d\n\n",(x+y));
            erros += 1;
        }
    }
    printf("Voce teve %d acertos e %d erros.\n\n",acertos, erros);
}
