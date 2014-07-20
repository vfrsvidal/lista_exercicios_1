# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <ctype.h>

char* abre_modifica(FILE *arq){
    char c = 's', s[1000], *nome;
    int x;
    printf("Entre com o nome para o arquivo a ser criado: \n");
    scanf(" %[^\n]s",nome);
    strcat(nome,".txt");// strcat(destino, origem);
    while(c == 's'){
        if (arq = fopen(nome,"a")){
            printf("<operacao realizada com sucesso - digite o texto para modificar o arquivo>\n");
            do {
                scanf(" %[^\n]s",s);
                if (s[0]!='0'){
                    if (fputs(s, arq) == EOF){
                        printf("<erro na gravacao>\n");
                    } else {
                        fputs("\n", arq);
                    }
                }
            } while (s[0]!='0');
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
    return nome;
}

void *mescla(FILE *arq1, char *s1, FILE *arq2){
    char c = 's', s2[100], origem[1000], destino[1000], *conteudo;
    printf("Entre com o nome para o arquivo a ser criado (para letras maiusculas):\n");
    scanf(" %[^\n]s",s2);
    strcat(s2,".txt");// strcat(destino, origem);
    while(c == 's'){
        if ((arq1 = fopen(s1,"r"))&&(arq2 = fopen(s2,"a"))){
            printf("<operacao realizada com sucesso>\n");
            while (!(feof(arq1))){
                conteudo = fgets(origem, 1000, arq1);  // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                if (conteudo){// Se conteudo eh diferente de NULL
                    strcpy(destino, origem);
                    int count = 0;
                    while(destino[count]!= '\0'){
                        destino[count]=(toupper(destino[count]));
                        count++;
                    }
                    fputs(destino, arq2); // nao precisa do fputs("\n",arq3); porque isso tambem eh copiado dos arquivos arq1 e arq2
                }
            }
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq1);
    fclose(arq2);
}


void main(){
    FILE *arquivo1, *arquivo2;
    char *Nome_arquivo=abre_modifica(arquivo1);

    mescla(arquivo1, Nome_arquivo, arquivo2);

}
