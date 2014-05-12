# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

void printando(){
    int e;
    for(e=1;e<=100;e++){
        printf("%d\n",e);
    }
    e = 1;
    while(e<=100){
        printf("%d\n",e);
        e++;
    }
    e = 1;
    do{
        printf("%d\n",e);
        e++;
    }while(e<=100);
}

void main(){
    printando();
}
