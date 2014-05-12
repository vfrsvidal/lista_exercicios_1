# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define total 10

int numero_1_a_20(){
    int condic = 1,e;
    int number = 19;
    while(condic){
        number++;
        for(e=1;e<21;e++){
            if(number%e == 0){
                condic = 0;
            } else {
                condic = 1;
                break;
            }
        }
    }
    return number;
}

void main(){

    printf("%d\n",numero_1_a_20());

}
