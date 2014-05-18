# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

int tamanho(char *s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    }
    return count;
}

bool verificar_final(){
    char first[30],second[30];
    int tam1,tam2;
    printf("Entre com uma palavra: \n");
    scanf("%s",&first);
    printf("Entre com a segunda palavra: \n");
    scanf("%s",&second);
    tam1 = tamanho(first)-1;
    tam2 = tamanho(second)-1;
    if (tam1<tam2){
        return false;
    } else {
        while (tam2>=0){
            if (second[tam2]!=first[tam1]){
                return false;
            }
            tam2--;
            tam1--;
        }
    }
    return true;
}

void main(){
    if (verificar_final()){
        printf("esta no final!");
    } else {
        printf("Nao esta!");
    }
}
