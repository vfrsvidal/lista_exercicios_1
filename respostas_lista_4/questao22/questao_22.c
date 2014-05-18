# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void maiusc_para_minus(char *s){ // funcao para fazer uma uma string maiuscula em minuscula
    int count=0;
    while (s[count]!='\0'){  // faz com que eu tenha na variavel copia1 a string s totalmente menuscula
        if ((s[count]>64)&&(s[count]<91)){
            s[count]=(s[count]+32);
        }
        count++;
    }
}

void main(){
    char palavra[100]="Testando a minha funcao em SSA";
    maiusc_para_minus(palavra);
    printf("%s\n",palavra);
}
