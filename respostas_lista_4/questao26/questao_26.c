# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

# define tam 100
# define tam_turma 3

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

typedef struct aluno{
    char matricula[tam];
    char nome[tam];
    char codigo[tam];
    float nota1;
    float nota2;
    float media;
}Dadosalunos;

void media_alunos(Dadosalunos *D){
    int count=0;
    while(count<tam_turma){
        printf("Entre com a matricula do aluno: \n");
        scanf("%[^\n]s",D[count].matricula);
        flush();
        printf("Entre com o nome do aluno: \n");
        scanf("%[^\n]s",D[count].nome);
        flush();
        printf("Entre com o codigo do aluno: \n");
        scanf("%[^\n]s",D[count].codigo);
        flush();
        printf("Entre com primeira nota deste aluno: \n");
        scanf("%f",&D[count].nota1);
        flush();
        printf("Entre com segunda nota deste aluno: \n");
        scanf("%f",&D[count].nota2);
        flush();
        D[count].media=(((D[count].nota1)+((D[count].nota2)*2))/3);
        count++;
        printf("\n\n");
    }
    printf("-------------------------------------------------------------- \n");
    for(count=0;count<tam_turma;count++){
        printf("Matricula do aluno: %s\n",D[count].matricula);
        printf("Nome do aluno: %s\n",D[count].nome);
        printf("Codigo do aluno: %s\n",D[count].codigo);
        printf("Primeira nota: %f\n",D[count].nota1);
        printf("Segunda nota: %f\n",D[count].nota2);
        printf("Media final: %f\n\n",D[count].media);
    }
}


void main(){
    Dadosalunos Turma[tam_turma];
    media_alunos(Turma);
}
