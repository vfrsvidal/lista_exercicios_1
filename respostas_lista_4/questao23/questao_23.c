# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

bool compara(char *c, char *c2){
    int e=0;
    while ((c[e]!='\0')&&(c2[e]!='\0')){
        if (c[e]!=c2[e]){
            return false;
        }
        e++;
    }
    if (c[e]==c2[e]){
        return true;
    }
    return false;
}

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

void dados(){
    char nome[100],nacionalidade[30],sexo;
    int idade;
    printf("Entre com o nome: \n");
    scanf("%[^\n]s",nome);
    flush();
    printf("Entre com o sexo (M para masculino ou F para feminino): \n");
    scanf("%c",&sexo);
    flush();
    printf("Entre com sua idade (entre 0 e 150): \n");
    scanf("%d",&idade);
    flush();
    printf("Entre com a nacionalidade (brasileira ou estrangeira): \n");
    scanf("%s",nacionalidade);
    flush();
    if (((sexo!='M')&&(sexo!='F'))||(idade<0)||(idade>150)||((!(compara(nacionalidade,"brasileira")))&&(!(compara(nacionalidade,"estrangeira"))))){
        printf("Dado inserido invalido!\n");
    } else {
        if (sexo=='M'){
            if (compara(nacionalidade,"brasileira")){
                if (idade >= 18) {
                    printf("%s, brasileiro do sexo masculino e maior de idade, esta habilitado a dirigir!\n",nome);
                } else {
                    printf("%s, brasileiro do sexo masculino e menor de idade, nao esta habilitado a dirigir!\n",nome);
                }
            } else {
                if (idade >= 18) {
                    printf("%s, estrangeiro do sexo masculino e maior de idade, esta habilitado a dirigir!\n",nome);
                } else {
                    printf("%s, estrangeiro do sexo masculino e menor de idade, nao esta habilitado a dirigir!\n",nome);
                }
            }
        } else {
            if (compara(nacionalidade,"brasileira")){
                if (idade >= 18) {
                    printf("%s, brasileira do sexo feminino e maior de idade, esta habilitada a dirigir!\n",nome);
                } else {
                    printf("%s, brasileira do sexo feminino e menor de idade, nao esta habilitada a dirigir!\n",nome);
                }
            } else {
                if (idade >= 18) {
                    printf("%s, estrangeira do sexo feminino e maior de idade, esta habilitada a dirigir!\n",nome);
                } else {
                    printf("%s, estrangeira do sexo feminino e menor de idade, nao esta habilitada a dirigir!\n",nome);
                }
            }
        }
    }
}

void main(){
    dados();
}
