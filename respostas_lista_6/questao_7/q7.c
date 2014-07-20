# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

int le_arquivo(FILE *arq){
    char c = 's', *conteudo, *validade;
    int total=0;
    while(c == 's'){
        if (arq = fopen("teste.txt","r")){
            printf("<operacao realizada com sucesso>\n<a seu conteudo sera mostrado a seguir>\n\n");
            while (!(feof(arq))){
                validade = fgets(conteudo, 1000, arq);  // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                if (validade){// Se conteudo eh diferente de NULL
                    total += atoi(conteudo);
                }
            }
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
    return total;
}

void main(){

    FILE *arquivo;

    printf("o total das compras eh: %d\n",le_arquivo(arquivo));

}
