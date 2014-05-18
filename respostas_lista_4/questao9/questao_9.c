# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void maiusculas(char *s){
    int count=0;
    while(s[count]!='\0'){
        if ((s[count]>96)&&(s[count]<123)){
            s[count]=s[count]-32;
        }
        count++;
    }
}

void main(){
    char str1[50]="Amanha irei pra aula (LAB-I)";
    maiusculas(str1);
    printf("%s\n",str1);
}
