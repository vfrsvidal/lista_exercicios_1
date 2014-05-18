# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

# define tam 100

bool char_s_vem_antes (char *s, char *s2){ // funcao para retornar se uma string s vem antes que uma string s2
    int count=0;
    char copia1[tam],copia2[tam]; //sao minhas copias menusculas
    while (s[count]!='\0'){  // faz com que eu tenha na variavel copia1 a string s totalmente menuscula
        if ((s[count]>64)&&(s[count]<91)){
            copia1[count]=(s[count]+32);
        } else {
            copia1[count]=s[count];
        }
        count++;
    }
    copia1[count]='\0';
    //printf("%s -> %s\n",s,copia1);
    count=0;
    while (s2[count]!='\0'){  // faz com que eu tenha na variavel copia2 a string s2 totalmente menuscula
        if ((s2[count]>64)&&(s2[count]<91)){
            copia2[count]=(s2[count]+32);
        } else {
            copia2[count]=s2[count];
        }
        count++;
    }
    copia2[count]='\0';
    //printf("%s -> %s\n",s2,copia2);
    count=0;
    while(1){
        if (copia1[count]<copia2[count]){
            return true;
        } else if (copia1[count]>copia2[count]){
            return false;
        }
        count++;
        if (copia1[count]=='\0'){
            return true;
        } else if (copia2[count]=='\0'){
            return false;
        }
    }
}

void main(){
    char word[tam]="Roberto Aunior",word2[tam]="roberto Aaria";
    if (char_s_vem_antes(word,word2)){
        printf("A palavra %s vem antes da palavra %s.\n",word,word2);
    } else {
        printf("A palavra %s vem antes da palavra %s.\n",word2,word);
    }
}
