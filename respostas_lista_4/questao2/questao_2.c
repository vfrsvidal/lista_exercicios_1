# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

int tamanho(char *s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    }
    return count;
}

bool palindromo (char *s){
    int e,i=0;
    e=tamanho(s)-1;
    while (e>=0){
        while ((s[i]==' ')||(s[i]==',')||(s[i]=='-')){
            i++;
        }
        while ((s[e]==' ')||(s[e]==',')||(s[e]=='-')){
            e--;
        }
        if (s[e]!=s[i]){
            return false;
        }
        i++;
        e--;
    }
    return true;
}

void main(){
    char word[100] = "socorram-me, subi no       onibus em marrocos";
    if(palindromo(word)){
        printf("eh!\n");
    } else {
        printf("nao eh!\n");
    }

}
