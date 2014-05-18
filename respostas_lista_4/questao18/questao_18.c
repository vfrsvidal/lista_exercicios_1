# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

int procura(){
    char c,str1[100];
    int i;
    printf("Entre com uma string: \n");
    scanf("%[^\n]s",str1);
    flush();
    printf("Entre com um caracter: \n");
    scanf("%c",&c);
    flush();
    printf("Entre com uma posicao: \n");
    scanf("%d",&i);
    while ((str1[i]!=c)&&(str1[i]!='\0')){
        i++;
    }
    if (str1[i]=='\0'){
        printf("Nao existe o caracter '%c' na string entrada!\n",c);
        return;
    } else {
        printf("O indice do caracter '%c' eh: [ %d ]\n",c,i);
    }
    return i;
}


void main(){
    procura();
}
