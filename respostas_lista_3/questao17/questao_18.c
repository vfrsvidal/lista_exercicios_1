# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

bool testador_palindromo(int x){
    int copia, result = 0;
    copia = x;
    while(copia > 0){
        result *= 10;
        result += copia % 10;
        copia = copia / 10;
    }
    if (result==x){
        return true;
    }
    return false;
}

void gerador(){
    int e,i,y,atual1=0,atual2=0,x=0;
    for(e=999; e>99; e--){
        for(i=999;i>99; i--){
            if (testador_palindromo(e*i)){
                y = (e*i);
                if (y > x){
                    atual1 = e;
                    atual2 = i;
                    x = y;
                }
            }
        }
    }
    printf("Os dois numeros que multiplicados geram o maior palindromo de 3 digitos sao: %d e %d.\n",atual1,atual2);
    printf("Geram o numero: %d\n",(x));
}

void main(){
    gerador();
}

