# include <stdio.h>

void main(){

    float tamanho_arquivo_MB, link_mbps, tempo_minutos;

    printf("Entre com o tamanho do arquivo em MB: \n");
    scanf("%f",&tamanho_arquivo_MB);

    printf("Entre com a velocidade do link de internet para o download de arquivo em Mbps: \n");
    scanf("%f",&link_mbps);

    tempo_minutos = (((tamanho_arquivo_MB*1024)/((link_mbps*1000000)/8192))/60);

    printf("o tempo aproximado de download do arquivo usando este link eh de %f minutos.\n",tempo_minutos);
}
