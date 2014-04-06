#include <stdio.h>
#include <string.h>

int main(){

    char s1[20],s2[20];

    printf("Entre com duas strings.\n");
    scanf("%s%s",&s1,&s2);

    printf("A segunda letra da string %s eh: [%c].\n",s1,s1[1]);
    printf("A segunda letra da string %s eh: [%c].\n",s2,s2[1]);

    return 0;
}
