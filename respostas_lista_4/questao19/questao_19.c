# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

# define tam 100

char* trecho(char *s,int i, int j){
    char str2[tam];
    int count=0;
    while(i<=j){
        str2[count]=s[i];
        i++;
        count++;
    }
    printf("%s\n",str2);
    return str2; // duvida sobre o que retorna <warning: function returns address of local variable [enabled by default]
}

void main(){
    char palavra[tam]="Vamos escrever alguma coisa so para testar";
    trecho(palavra,6,13);
}
