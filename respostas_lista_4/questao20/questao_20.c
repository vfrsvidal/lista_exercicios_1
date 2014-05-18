# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x;
    while (((x=getchar())!=EOF)&&(x!='\n'));
}

void ler_imprimir(){
    char str1[100];
    printf("Entre com uma string: \n");
    scanf("%[^\n]s",str1);
    flush();
    printf("A string entrada eh: [ %s ]\n",str1);
}

void main(){
    ler_imprimir();
}
