# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>

# define premio 780000

void main(){

    float a,b;
    a = ((premio*46)/100);
    b = ((premio*32)/100);

    printf("O primeiro vai levar: R$ %f\n",a);
    printf("O segundo vai levar: R$ %f\n",b);
    printf("O terceiro vai levar: R$ %f\n",(premio-(a+b)));
}
