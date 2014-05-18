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

void inverter(char *s2){
    int count=0,i=0,ult_valor=0;
    char s1[16];
    printf("Entre com uma palavra: \n");
    scanf("%s",s1);
    while(s1[count]!='\0'){
        count++;
    }
    ult_valor=count;
    count--;
    for(count;count>=0;count--){
        s2[count]=s1[i];
        i++;
    }
    s2[ult_valor]='\0'; //lembrar que nao posso inserir '\0' primeiro antes de inserir os elementos anteriores, porque ele insere na frente.
    if (compara(s1,s2)){
        printf("Eh palindromo!\n");
    } else {
        printf("Nao eh palindromo!\n");
    }
}

void main(){
    char str2[16];
    inverter(str2);
    printf("A palavra invertida eh: %s\n",str2);
}
