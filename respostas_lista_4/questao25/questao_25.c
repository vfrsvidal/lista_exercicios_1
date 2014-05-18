# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

# define tam_nome_car 50
# define tam_lista 5

typedef struct carro{
    char modelo[tam_nome_car];
    float consumo;
    float em_mil;
}Lista_modelo_consumo;

void flush(){
    char x;
    while(((x=getchar())!=EOF)&&(x!='\n'));
}

void menor_consumo(Lista_modelo_consumo *C){
    int count=0, economic=0;
     printf("Entre com o modelo do veiculo: \n");
        scanf("%[^\n]s",C[count].modelo);
        flush();
        printf("Entre com o consumo do veiculo em km/l: \n");
        scanf("%f",&C[count].consumo);
        flush();
        C[count].em_mil=(1000/C[count].consumo);
        economic = count;
        count++;
        printf("\n\n");
    while(count<(tam_lista)){
        printf("Entre com o modelo do veiculo: \n");
        scanf("%[^\n]s",C[count].modelo);
        flush();
        printf("Entre com o consumo do veiculo em km/l: \n");
        scanf("%f",&C[count].consumo);
        flush();
        C[count].em_mil=(1000/C[count].consumo);
        if(C[count].consumo>C[economic].consumo){
            economic = count;
        }
        count++;
        printf("\n\n");
    }
    printf("\n\n");
    printf("O modelo mais economico eh o %s fazendo %.2f km/l de gasolina.\n\n",C[economic].modelo,C[economic].consumo);
    for(count=0;count<tam_lista;count++){
        printf("O consumo do carro %s eh de %.2f litros em uma viagem de 1000km\n",C[count].modelo,C[count].em_mil);
    }
}

void main(){
    Lista_modelo_consumo Carros[tam_lista];
    menor_consumo(Carros);
}
