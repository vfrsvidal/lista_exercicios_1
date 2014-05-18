# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void imprimir_concatenacao(){
    char str1[32],str2[16];
    int count=0,count2=0;
    printf("Entre com uma palavra: \n");
    scanf("%s",str1);
    printf("Entre com outra palavra: \n");
    scanf("%s",str2);
    while(str1[count]!='\0'){
        count++;
    }
    str1[count]=' ';
    count++;
    //str1[count]='\0'; // Nao necessario neste caso, pois eu ainda estou inserindo valores e os anteriores nao sao nulos
    while(str2[count2]!='\0'){
        str1[count]=str2[count2];
        count++;
        count2++;
    }
    str1[count]='\0'; // Aqui esta linha eh necessaria, pois eu preciso dizer onde minha string termina para nao pegar resto de codigo e dizer que faz parte dela
    printf("%s\n",str1);
}

void main(){
    imprimir_concatenacao();
}
