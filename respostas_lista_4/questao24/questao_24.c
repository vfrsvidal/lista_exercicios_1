# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

void jovem_velho(){
    int idade,i[2]; //i[0] == idade jovem, i[1] == idade velho.
    char nome[50],jovem[50],velho[50];
    printf("Entre com a idade: \n");
    scanf("%d",&idade);
    if (idade<0){
        return;
    }
    printf("Entre com o nome: \n");
    scanf("%s",nome);
    i[0]=idade;
    i[1]=idade;
    strcpy(jovem,nome); // strcpy eh uma funcao que copia a string do segundo termo para a string do primeiro
    strcpy(velho,nome);
    while(1){
        printf("\n\n");
        printf("Entre com a idade: \n");
        scanf("%d",&idade);
        flush();
        if(idade<0){
            break;
        }
        printf("Entre com o nome: \n");
        scanf("%s",nome);
        flush();
        if (idade < i[0]){
            i[0] = idade;
            strcpy(jovem,nome);
        }
        if (idade > i[1]){
            i[1] = idade;
            strcpy(velho,nome);
        }
    }
    printf("\n\n");
    printf("O mais jovem tem %d anos e se chama %s\n",i[0],jovem);
    printf("O mais velho tem %d anos e se chama %s\n",i[1],velho);
}

void main(){
    jovem_velho();
}
