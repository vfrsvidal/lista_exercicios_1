#include <stdio.h>
#include <string.h>

int main(){

    char s; // Lembrar de nao atribuir o tamanho da string porque da erro
    char b[10];
    int n;

    printf("Entre com um caracter:\n\n");
    scanf("%s",&s);

    n = (int)s;
    itoa(n,b,2);

    printf("O codigo ASCII na base 10 eh: [%d].\n",n);
    printf("O codigo ASCII na base 2 eh: [%s].\n\n",b);

    //para ter a letra a partir do código ASCII façamos:

    //printf("O caracter correspondente para o codigo [%d] eh: [%c]\n",n,n);

    return 0;
}
