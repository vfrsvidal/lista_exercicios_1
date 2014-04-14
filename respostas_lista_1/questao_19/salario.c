# include <stdio.h>

void main(){

    float q_h, n_h, IR, INSS, sindicato;

    printf("Quanto voce ganha por hora trabalhada? \n");
    scanf("%f",&q_h);

    printf("Quantas horas voce trabalhou durante o mes? \n");
    scanf("%f",&n_h);

    printf("Seu salario bruto eh de: R$ %f reais.\n",(q_h*n_h));

    IR = (0.11*(q_h*n_h));
    printf("Foram pagos R$ %f reais ao Imposto de Renda.\n",IR);

    INSS = (0.08*(q_h*n_h));
    printf("Foram pagos R$ %f reais ao INSS.\n",INSS);

    sindicato = (0.05*(q_h*n_h));
    printf("Foram pagos R$ %f reais ao Sindicato.\n",sindicato);

    printf("O seu salario liquido eh de: R$ %f reais.\n",((q_h*n_h)-(IR+INSS+sindicato)));
}
