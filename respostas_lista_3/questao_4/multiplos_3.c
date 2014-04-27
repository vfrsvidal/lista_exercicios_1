# include <stdio.h>

void main(){

    int count = 0, testador = 0;

    while (count < 5){
        ++testador;
        if (testador % 3 == 0){
            printf("%d ",testador);
            ++count;
        }
    }
}
