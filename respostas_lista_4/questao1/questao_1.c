# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

void cesar(char *c){ //manipulacao da tabela ascii
    int count=0;
    while(c[count]!='\0'){
        if ((c[count]>96)&&(c[count]<123)){ //verifica se o caracter entrado eh uma letra
            c[count]=(c[count]-32);
            if (c[count]>87){ //numero - 87 + 64, ou seja, numero - 23, desta forma ele volta pro inicio
                c[count]=(c[count]-23);
            } else {
                c[count]=(c[count]+3);
            }
        }
        count++;
    }
}

void main(){
    char frase[100]="a ligeira raposa marrom saltou sobre o cachorro cansado";
    cesar(frase);
    printf("%s\n",frase);
}
