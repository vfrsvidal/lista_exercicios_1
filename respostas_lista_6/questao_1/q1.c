# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

/* http://pt.wikibooks.org/wiki/Programar_em_C/Entrada_e_sa%C3%ADda_em_arquivos
   http://linguagemc.com.br/arquivos-em-c-categoria-usando-arquivos/
   http://www.inf.pucrs.br/~pinho/LaproI/Arquivos/Arquivos.htm
   http://homepages.dcc.ufmg.br/~joaoreis/Site%20de%20tutoriais/c_int/arquivos.htm
   https://www.google.com.br/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=manipular+arquivos+em+c+n%C3%A3o+sobrescrever+txt&spell=1
   http://www.ic.unicamp.br/~oliveira/doc/mc102_2s2004/aula16.pdf
*/

/*bool cria_abre(FILE *arq){
    char c = 's';
    while(c == 's'){
        if (arq = fopen("arq.txt","a")){
            printf("<operacao realizada com sucesso>\n");
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    fclose(arq);
}*/

void abre_modifica(FILE *arq){
   char c = 's', s[1000];
   int x;
    while(c == 's'){
        if (arq = fopen("arq.txt","a")){
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

int le_arquivo(FILE *arq){
    char c = 's', *conteudo, linha[1000];
    int i=0;
    while(c == 's'){
        if (arq = fopen("arq.txt","r")){
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
    return i;
}

void main (){
    FILE *arquivo;
    int num;

    //cria_abre(arquivo);
    abre_modifica(arquivo);
    num = le_arquivo(arquivo);
    printf("O numero de linhas eh de: %d\n",num);

}
