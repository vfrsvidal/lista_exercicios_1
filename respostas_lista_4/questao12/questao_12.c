# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

# define tam 40

bool possui_parte(char *s1, char *s2){
    int count=0,count2=0,i=0; //atribuir 0 a i (i=0) porque o primeiro while o count eh somado com ele!!!
    while(s2[count+i]!='\0'){
        i=count2=0;
        while(s1[count2]!='\0'){
            if (s1[count2]!=s2[count+i]){
                break;
            } else if ((s1[count2+1]=='\0')&&(s1[count2]==s2[count+i])){
                return true;
            }
            i++;
            count2++;
        }
        count++;
    }
    return false;
}

void flush(){
    char x;  //geralmente depois de um scanf o buffer do teclado fica com resíduos entao essa funcao consome ate a quebra de linha (\n) pra nao ocasionar problemas principalmente em lacos de repeticao
    while(((x=getchar())!=EOF)&&(x!='\n')); // EOF significa end of file, ou seja, uma constante retornada quando se acaba de ler algo, caracter por exemplo;
}

typedef struct lista{ // posso colocar um nome pra minha struct ou nao, exemplo: struct lista { ou somente: struct {
    char nome[40];
}Lista_nomes; // aqui eu defini um tipo, tipo struct com uma string nome[40], posso declarar algo assim agora, exemplo: Lista_nomes exemplo;

void programa(){
    int count=0;
    char s,busca[40],copy[40];
    bool res = true;
    Lista_nomes total[tam];
    while(res){
        printf("Entre com o nome do aluno: \n");
        scanf("%[^\n]s",total[count].nome);
        flush();// getchar(); tambem funciona aqui! substituir direto no lugar da minha funcao flush
        printf("Deseja inserir um novo nome? [Entre 's' para sim e 'n' para nao!]\n");
        printf("Alunos inseridos: [ %d ]\n",(count+1));
        scanf("%c",&s);
        if (s=='s'){
            count++;
        } else {
            res = false;
        }
        flush();// getchar(); tambem funciona aqui! // porque depois do ultimo scanf eh retornado um buffer assim, no scanf("%[^\n]s",total[count].nome da proxima interacao isso seria consumido e traria problemas.
    }
    printf("Entre com o nome (ou parte dele) que deseja procurar: \n");
    scanf("%[^\n]s",busca);
    flush();
    for(count;count>=0;count--){
        if (possui_parte(busca,total[count].nome)){
            printf("\nNome encontrado: [ %s ]\nIndice: [ %d ]\n\n",total[count].nome,count);
        }
    }
}

void main(){
    programa();
}
