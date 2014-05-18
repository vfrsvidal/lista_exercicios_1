# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void sem_vogais(char *s){
    int count=0,count2=0;
    while(s[count]!='\0'){
        while ((s[count]=='a')||(s[count]=='e')||(s[count]=='i')||(s[count]=='o')||(s[count]=='u')){
            count++;
        }
        s[count2]=s[count];
        count2++;
        count++;
    }
    s[count2]='\0';
    printf("%s\n",s);
}

void main(){
    char str1[30]="kakaroto";
    sem_vogais(str1);
}
