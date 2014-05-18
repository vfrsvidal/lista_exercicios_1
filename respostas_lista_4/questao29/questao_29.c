# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

int tamanho(char *s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    }
    return count;
}


void main(){
    char word[20]="testador";
    printf("%d\n",tamanho(word));
}
