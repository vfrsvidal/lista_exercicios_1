# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

bool cria_abre(FILE *arq, char *s){
    char c = 's';
    while(c == 's'){
        if (arq = fopen(s,"a")){
            printf("<operacao realizada com sucesso>\n");
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
}

void abre_modifica(FILE *arq, char *st){
   char c = 's', s[1000];
   int x;
    while(c == 's'){
        if (arq = fopen(st,"a")){
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
}

void le_arquivo(FILE *arq, char *s){
    char c = 's', *conteudo, linha[1000];
    int i=0;
    while(c == 's'){
        if (arq = fopen(s,"r")){
            printf("<operacao realizada com sucesso>\n<a seu conteudo sera mostrado a seguir>\n\n");
            while (!(feof(arq))){
                conteudo = fgets(linha, 1000, arq);  // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                if (conteudo){// Se conteudo eh diferente de NULL
                    i++;
                    printf("Linha %d : %s",i,linha);
                }
            }
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
}

void mescla(FILE *arq1, char *s1, FILE *arq2, char *s2, FILE *arq3, char *s3){
    FILE *arq_aux;
    char c = 's', *conteudo, origem[1000], destino[1000];
    int count=1;
    while(c == 's'){
        if ((arq1 = fopen(s1,"r"))&&(arq2 = fopen(s2,"r"))&&(arq3 = fopen(s3,"a"))){
            printf("<operacao realizada com sucesso>\n");
            arq_aux=arq1;
            while (count<=2){
                while (!(feof(arq_aux))){
                    conteudo = fgets(origem, 1000, arq_aux);  // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                    if (conteudo){// Se conteudo eh diferente de NULL
                        strcpy(destino, origem);
                        fputs(destino, arq3); // nao precisa do fputs("\n",arq3); porque isso tambem eh copiado dos arquivos arq1 e arq2
                    }
                }
                count++;
                arq_aux = arq2;
            }
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}

void main (){
    FILE *arquivo1, *arquivo2, *arquivo3;
    int num;

    abre_modifica(arquivo1,"arq1.txt");
    abre_modifica(arquivo2,"arq2.txt");
    cria_abre(arquivo3,"arq3.txt");
    mescla(arquivo1,"arq1.txt", arquivo2,"arq2.txt", arquivo3,"arq3.txt");
    le_arquivo(arquivo3,"arq3.txt");

}
