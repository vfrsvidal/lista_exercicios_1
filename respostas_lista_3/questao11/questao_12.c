# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

char* substitui(char *palavra,int tamanho_string){
    int e;
    for (e=0;e<tamanho_string;e++){
        if (palavra[e] == '0'){
            palavra[e] = '1';
        }
    }
    return palavra;
}


void main(){
    char word[total] = "100110010";
    printf("%s\n",substitui(word,total));
}
