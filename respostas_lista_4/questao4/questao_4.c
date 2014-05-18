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

void main(){
    char first[20]="testador",second[20]="testador";
    if(compara(first,second)){
        printf("Sao iguais!\n");
    } else {
        printf("Sao diferentes!\n");
    }
}
