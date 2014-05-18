# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void condic_imprimir(char *s){
    if((s[0]=='a')||(s[0]=='A')){
        printf("%s\n",s);
    }
}

void main(){
    char str1[]="Dmanha";
    condic_imprimir(str1);
}
