# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void concatenar_n(){
    char str1[50],str2[50];
    int n,count=0,count2=0;
    printf("Entre com uma palavra: \n");
    scanf("%s",str1);
    printf("Entre com outra palavra: \n");
    scanf("%s",str2);
    printf("Entre com um inteiro positivo: \n");
    scanf("%d",&n);
    while(str1[count]!='\0'){
        count++;
    }
    for(n;n>0;n--){
        str1[count+1]='\0'; //ou =0 apenas.
        str1[count]=str2[count2];
        count2++;
        count++;
    }
    printf("%s\n",str1);
    //printf("%c",str1[count-1]); //<- testa se o '\0' esta no lugar certo.
    str1[count=' '];
    str1[0]=0;
}


void main(){
    concatenar_n();
}
