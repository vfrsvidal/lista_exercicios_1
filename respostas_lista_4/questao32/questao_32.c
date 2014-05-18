# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void vogais_substituir(char *s){
    int count=0,total=0;
    char c;
    printf("Entre com um caracter para substituir as vogais presentes: \n");
    scanf("%c",&c);
    while (s[count]!='\0'){
        if ((s[count]=='a')||(s[count]=='e')||(s[count]=='i')||(s[count]=='o')||(s[count]=='u')){
            total++;
            s[count]=c;
        }
        count++;
    }
    printf("A palavra continha %d vogais.\n",total);
}

void main(){
    char str1[100]="testando a funcao";
    vogais_substituir(str1);
    printf("%s\n",str1);
}
