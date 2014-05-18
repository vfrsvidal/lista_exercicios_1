# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x; // Continue getting characters until EOF is found, or newline.
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

int tamanho(char *s){
    int count=0;
    while (s[count]!='\0'){
        count++;
    }
    return count;
}

void imprimir_(){
    int e,count=0;
    char frase1[200],frase2[200],new_[200];
    printf("Entre com uma frase: \n");
    scanf("%[^\n]s",&frase1);  //Nao precisa do &, pois uma string eh um vetor de caracteres
    flush();
    printf("Entre com outra frase: \n");
    scanf("%[^\n]s",&frase2);
    flush();
    e=tamanho(frase1)-1;
    for(e;e>=0;e--){
        new_[count]=frase1[e];
        count++;
    }
    new_[count] = '\0'; // necessario!!! porque precisamos dizer onde eh o final do vetor novo
    /*for(e;new_[e]!='\0';e++){  // <- condicao de parada encontrar um caracter '\0'
        printf("%c",new_[e]);    // teste feito para saber se era preciso colocar '\0' no final da string, nao eh necessario!
    }*/
    count=0;
    while(new_[count]!='\0'){
        if ((new_[count]=='A')||(new_[count]=='a')){
            new_[count]='*';
        }
        count++;
    }
    printf("\n%s\n\n",new_);
    count=0;
    e=tamanho(frase2)-1;
    for(e;e>=0;e--){
        new_[count]=frase2[e];
        count++;
    }
    new_[count] = '\0'; // necessario!!! porque precisamos dizer onde eh o final do vetor novo
    count=0;            // se eu entrar com uma string maior que a anterior aqui, nao ha problemas, pois o compilador coloca '\0' na seguinte apos ultrapassar o valor.
    while(new_[count]!='\0'){
        if ((new_[count]=='A')||(new_[count]=='a')){
            new_[count]='*';
        }
        count++;
    }
    printf("\n%s\n\n",new_);
}

void main(){
    imprimir_();
}
