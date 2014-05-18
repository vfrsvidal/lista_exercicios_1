# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void de_tras_pra_frente(char *s){
    int e,count=0;
    while(s[count]!='\0'){
        count++;
    }
    for (e=(count-1);e>=0;e--){
        printf("%c",s[e]);
    }
    printf("\n");
}

void main(){
    de_tras_pra_frente("Testador");
}
