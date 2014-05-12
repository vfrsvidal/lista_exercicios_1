# include <stdio.h>

int multiplos_3(){
    int count = 0, testador = 0;
    while (count < 5){
        ++testador;
        if (testador % 3 == 0){
            printf("%d \n",testador);
            ++count;
        }
    }
}

void main(){
    multiplos_3();
}
