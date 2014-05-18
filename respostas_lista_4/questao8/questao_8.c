# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void repeticoes(){
    char A[50],B[50];
    int count=0,count2=0,i=0,soma=0;
    bool res;
    printf("Entre com uma palavra: \n");
    scanf("%s",&A);
    printf("Entre com outra palavra: \n");
    scanf("%s",&B);
    while((B[count+i]!='\0')){
        i=count2=0;
        res=true;
        while ((A[count2]!='\0')){//Eh necessario ser assim pois ele compara '\0' com o ultimo caracter de A nao usar isso:
            if (B[count+i]!=A[count2]){                                                           //  &&(B[count+i]!='\0'))
                res = false;
                break;
            }
            count2++;
            i++;
        }
        count++;
        if (res){
            soma++;
        }
    }
    printf("%d\n",soma);
}

void main(){
    repeticoes();
}
