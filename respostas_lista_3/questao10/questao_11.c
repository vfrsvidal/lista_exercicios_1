# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

int contador(char *palavra,int tamanho_string){
    int e, count = 0;
    for (e=0;e<tamanho_string;e++){
        if (palavra[e] == '1'){ // Nao pode ser "1" (aspas duplas), precisa ser aspas simples!!!
            count++;
        }
    }
    return count;
}


void main(){
    char word[total] = "100110010"; // Nao pode ser '10010100' (aspas simples), precisa ser aspas duplas!!!
    printf("%d\n",contador(word,total));
}
