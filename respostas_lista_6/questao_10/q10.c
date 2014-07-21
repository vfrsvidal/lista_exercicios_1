# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <ctype.h>

bool converter_string(char *s, int *x){ // converte numeros de uma string s em inteiro e coloca o valor em x (negativo ou positivo)
    char n[100];
    int count = 0, count2 = 0, conv = 0, sinal = 1, i = 1;
    while(s[count]!='\0'){ // aqui seleciona a parte com numeros a partir de x e ate finalizar os numeros ou a string
        if ((s[count]>47)&&(s[count]<58)){
            n[count2] = s[count];
            count2++;
        }
        if ((s[count]==45)&&(count2==0)){ // verifica se existe o sinal de negativo antes de qualquer numero para multiplicar no final
            while (s[count+i]==' '){ // esse while pula os espacos em branco
                i++;
            }
            if (((s[count+i]>47)&&(s[count+i]<58))){ // verifica se o caracter logo apos os espacos em branco eh um numero
                sinal = (-1);
            }
        }
        count++;
    }
    n[count2] = '\0';
    if (n[0]!='\0'){
        count = 0; // a partir daqui que comeca a conversao para inteiro
        while(n[count]!='\0'){
            conv *= 10;
            conv += n[count]-48;
            count++;
        }
        *x = (conv*sinal);
    } else {
        return false;
    }
    return true;
}

void saida_arquivo(FILE *arq, FILE *arq2){
    char linha[1000],s[1000];
    int po=0,num=0;
    if (arq = fopen("cidades.txt","r")){
        printf("<operacao realizada com sucesso>\n");
        while (!(feof(arq))){
            if (fgets(linha, 1000, arq)){// Se eh diferente de NULL // o 'fgets' lê até 999 caracteres ou até o '\n' e retorna um apontador para a string com a linha
                converter_string(linha,&num);
                if (num>po){
                    strcpy(s,linha);
                    po = num;
                }
            }
        }
        if (arq2 = fopen("saida.txt","w")){
            fputs(s,arq2);
        }
    } else {
        printf("<operacao nao realizada>\n");
    }
    fclose(arq);
}

void main (){
    FILE *arquivo1, *arquivo2;

    saida_arquivo(arquivo1, arquivo2);

}
