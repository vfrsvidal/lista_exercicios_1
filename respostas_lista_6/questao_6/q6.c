# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

void abre_modifica(FILE *arq){
    char c = 's', s[200], nome[200];
    int x, num;
    printf("Entre com o nome para o arquivo a ser criado: \n");
    scanf(" %[^\n]s",nome);
    strcat(nome,".txt");// strcat(destino, origem);
    while(c == 's'){
        if (arq = fopen(nome,"a")){
            printf("<operacao realizada com sucesso - digite o texto para modificar o arquivo>\n");
            do {
                scanf(" %d",&num);
                itoa(num,s,2); // transforma num em binario e armazena na string s
                if (s[0]!='0'){
                    if (fputs(s, arq) == EOF){
                        printf("<erro na gravacao>\n");
                    }
                    fputs("\n", arq);
                }
            } while (s[0]!='0');
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
