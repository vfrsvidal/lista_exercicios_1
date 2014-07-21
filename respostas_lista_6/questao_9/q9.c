# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct disp{
    int codigo;
    char descricao[1000];
    int quantidade;
}dispensa;

void binario_save(FILE *arq){
    dispensa aux;

    if((arq = fopen("dispensa.dat","wb")) == NULL){
        printf("<erro ao abrir arquivo>\n");
    }
    aux.codigo = 67;
    strcpy(aux.descricao,"mais um aqui nessa bagaca");
    aux.quantidade = 5;
    fwrite(&aux,sizeof(dispensa),1,arq);

    aux.codigo = 45;
    strcpy(aux.descricao,"sei la");
    aux.quantidade = 33;
    fwrite(&aux,sizeof(dispensa),1,arq);

    aux.codigo = 978;
    strcpy(aux.descricao,"jhasd asdlkjaksjhajs");
    aux.quantidade = 23;
    fwrite(&aux,sizeof(dispensa),1,arq);

    fclose(arq);
}

void binario_read(FILE *arq){
    dispensa aux;

    if((arq = fopen("dispensa.dat","rb")) == NULL){
        printf("<erro no arquivo>\n");
    }
    //fseek(arq,1*sizeof(dispensa),SEEK_SET);
    //rewind(arq);
    //fread(&aux,sizeof(dispensa),1,arq);
    while(fread(&aux,sizeof(dispensa),1,arq) == 1){
        printf("codigo: %d\n",aux.codigo);
        printf("descricao: %s\n",aux.descricao);
        printf("quantidade: %d\n\n",aux.quantidade);
    }
    fclose(arq);
}

void main(){

    FILE *arquivo;

    binario_save(arquivo);
    binario_read(arquivo);

}
