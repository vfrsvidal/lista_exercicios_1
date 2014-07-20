# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

int repeticoes(char *A, char *B){ // quantas vezes a string A aparece na string B
    int count=0,count2=0,i=0,soma=0;
    bool res;
    while((B[count+i]!='\0')){
        i=count2=0;
        res=true;
        while ((A[count2]!='\0')){//Eh necessario ser assim pois ele compara '\0' com o ultimo caracter de A nao usar isso:
            if (B[count+i]!=A[count2]){                                                           //  &&(B[count+i]!='\0'))
                res = false;
                break;
            }
            count2++;
            i++;
        }
        count++;
        if (res){
            soma++;
        }
    }
    return soma;
}

void repetidas(FILE *arq1){
    char c = 's', s1[100], origem[1000], *conteudo, s[1000], palavra[100];
    int total=0;
    printf("Entre com o nome para o arquivo a ser criado: \n");
    scanf(" %[^\n]s",s1);
    strcat(s1,".txt");// strcat(destino, origem);
    while(c == 's'){
        if ((arq1 = fopen(s1,"a+"))){
            printf("<operacao realizada com sucesso - digite o texto para modificar o arquivo>\n");
            do {
                scanf(" %[^\n]s",s);
                if (s[0]!='0'){
                    if (fputs(s, arq1) == EOF){
                        printf("<erro na gravacao>\n");
                    } else {
                        fputs("\n", arq1);
                    }
                }
            } while (s[0]!='0');
            printf("Entre com a palavra: \n");
            scanf(" %s",palavra);
            rewind(arq1);
            while (!(feof(arq1))){
                conteudo = fgets(origem, 1000, arq1);  // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                if (conteudo){// Se conteudo eh diferente de NULL
                    total += repeticoes(palavra, origem);
                }
            }
            c = 'n';
        } else {
            printf("<operacao nao realizada>\ndeseja tentar novamente? <s/n>\n");
            scanf("%c",&c);
        }
    }
    printf("possui a palavra %s, %d vez(es)\n",palavra,total);
    fclose(arq1);
}

void main (){
    FILE *arquivo;

    repetidas(arquivo);

}
