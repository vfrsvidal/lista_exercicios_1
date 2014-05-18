# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void print_4(char *s){
    int e;
    for(e=0;e<4;e++){
        printf("%c",s[e]);
    }
}

void main(){
    char nome[30]="Cameron";
    print_4(nome);
}
