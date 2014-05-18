# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void mais_1(){
    char str1[50];
    int count=0;
    printf("Entre com uma palavra: \n");
    scanf("%s",str1);
    while(str1[count]!='\0'){
        str1[count]=str1[count]+1;
        count++;
    }
    printf("%s\n",str1);
}

void main(){
    mais_1();
}
