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

void condic(){
    char nome[100],sexo[20];
    int idade=0;
    printf("Entre com o nome: \n");
    scanf("%[^\n]s",nome);
    flush();
    printf("Entre com o sexo: \n");
    scanf("%[^\n]s",sexo);
    flush();
    printf("Entre com a idade: \n");
    scanf("%d",&idade);
    if ((compara(sexo,"feminino"))&&(idade<25)){
        printf("%s, ACEITA!\n",nome);
    } else {
        printf("NAO ACEITA!\n");
    }
}

void main(){
        condic();
}
