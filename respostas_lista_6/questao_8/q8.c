# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

void abre_modifica(FILE *arq){
    char c = 's', s[1000], nome[200], aux[200];
    int x, num;
    printf("Entre com o nome para o arquivo a ser criado: \n");
    scanf(" %[^\n]s",nome);
    strcat(nome,".txt");// strcat(destino, origem);
    while(c == 's'){
        if (arq = fopen(nome,"a+")){
            printf("<operacao realizada com sucesso>\n");
            do {
                printf("<entre com o nome do contato>\n");
                scanf(" %[^\n]s",s);
                strcat(s," - nº: ");
                printf("<entre com o numero do contato ou 0 para sair>\n");
                scanf(" %[^\n]s",aux);
                strcat(s,aux);
                if (aux[0]!='0'){
                    if (fputs(s, arq) == EOF){
                        printf("<erro na gravacao>\n");
                    }
                    fputs("\n", arq);
                }
            } while (aux[0]!='0');
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
}

void main(){
    int num;
    char s[200];
    FILE *arquivo;

    abre_modifica(arquivo);

}
