# include <stdio.h>

int main(){

    float num, media = 0;
    int count = 1;

    do{
        printf("Entre com a nota %d: \n",count);
        scanf("%f",&num);
        media += num;
        ++count;
    }while (count <= 4);

    printf("A media entre as notas eh: %f",(media/(count-1)));

    return 0;
}
