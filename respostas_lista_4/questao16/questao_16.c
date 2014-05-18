# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x;
    while (((x=getchar())!=EOF)&&(x!='\n'));
}

void sem_caracter(){
    char str1[31],str2[31],c;
    int count=0,i=0;
    printf("Entre com uma palavra: \n");
    scanf("%s",str1);
    flush(); //getchar(); // <- ou podemos usar somente esta
    printf("Entre com um caracter para excluir da palavra: \n");
    scanf("%c",&c);
    printf("A palavra original eh: %s\n",str1);
    while(str1[count]!='\0'){
        if (str1[count]!=c){
            str2[i]=str1[count];
            i++;
        }
        count++;
    }
    str2[i]='\0';
    printf("O resultado da operacao eh: %s",str2);
}

void main(){
    sem_caracter();
}
