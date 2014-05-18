# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
   char x; // Continue getting characters until EOF is found , or newline.
   while ((x = getchar()) != EOF && x != '\n');
}

void sem_espacos(){
    char frase[100];
    int count=0,res,count2=0;
    printf("Entre com uma frase: \n\n");
    scanf("%[^\n]s",&frase); // permite inserir espacos na minha string
    flush(); //meio desnecessario nesse caso, pois vai gerar uma proxima linha, mas eu nao estou lendo nada no seguir do codigo
    while(frase[count2]!='\0'){ // ou !=0
        res=0;
        if (frase[count]==' '){
            while (frase[count]!='\0'){
                frase[count]=frase[count+1];
                count++;
            }
            frase[count-1]='\0';
            res = 1;
        } else {
            count2++;
            count++;
        }
        if (res==1){
            count = 0;
            count2 = 0;
        }
    }
    printf("\n%s\n",frase);
}

void main(){
    sem_espacos();
}
